#include <iostream>

using namespace std;

class Stu {
private:
    string name;
    int age;
    int* p;

public:
    Stu(string name, int age)
    { // ���캯��
        this->name = name;
        this->age = age;
        this->p = new int[10];
        cout << "���캯��" << endl;
    }
    // note:�������г�Աָ��ָ�������Դʱ����Ҫ�Լ��ṩ������캯��
    Stu(const Stu& other)
    { // �������캯��
        this->name = other.name;
        this->age = other.age;
        // this->p = other.p;//ǳ����
        // 1.�ȿ��ٿռ�
        this->p = new int[10]; // ���
        // 2.�ٿ�������
        memcpy(this->p, other.p, sizeof(int[10]));
        cout << "������캯��" << endl;
    }
    Stu& operator=(const Stu& other)
    { // ��ֵ���������
        // 1.���ж��Ƿ���ͬһ�����������ͬһ������ֱ�ӷ�������
        if (this == &other) {
            return *this;
        }
        // 2.�ͷ�ԭ����Դ
        if (this->p != nullptr) // ��ֹ�ظ��ͷ�
        {
            delete[] this->p;
            this->p = NULL;
        }
        // 3.���
        this->name = other.name;
        this->age = other.age;
        // 3.1�ȿ��ٿռ�
        this->p = new int[10];
        // 3.2�ٿ�������
        memcpy(this->p, other.p, sizeof(int[10]));
        cout << "��ֵ���������" << endl;
        return *this;
    }

    ~Stu()
    { // ��������
        if (this->p != nullptr) // ��ֹ�ظ��ͷ�
        {
            delete[] this->p;
            this->p = NULL;
        }
        cout << "��������" << endl;
    }
    void show()
    { // ��Ա����
        cout << "name:" << name << "age:" << age << endl;
    }
    int getAge() const // ������
    {
        return this->age;
    }
	//note:����������ĺ��������ǳ�Ա����
	//note:��������ָ���������const���������ڲ����޸ĳ�Ա����
    int operator-(const Stu& other) const
    {
		cout<<"����-�����"<<endl;
        return this->age - other.age;
    }
}; // end of class Stu

const Stu& compare(const Stu& stu1, const Stu& stu2)
{
    return stu1.getAge() > stu2.getAge() ? stu1 : stu2;
}

int main()
{
    Stu s1("����", 18);
    Stu s2(s1); // �������캯��
    s1.show();
    s2.show();

    Stu s3("����", 20);
    cout << "--------------------" << endl;
    Stu s4 = compare(s1, s3);
	cout << "--------------------" << endl;
    Stu s5 = s4;
    s4.show();
    s5.show();
	cout<<"--------------------"<<endl;
	cout<<s1-s3<<endl;

    return 0;
}