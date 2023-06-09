#include <iostream>

using namespace std;

class Stu {
private:
    string name;
    int age;
    int* p;

public:
    Stu(string name, int age)
    { // 构造函数
        this->name = name;
        this->age = age;
        this->p = new int[10];
        cout << "构造函数" << endl;
    }
    // note:当类中有成员指针指向堆区资源时，需要自己提供深拷贝构造函数
    Stu(const Stu& other)
    { // 拷贝构造函数
        this->name = other.name;
        this->age = other.age;
        // this->p = other.p;//浅拷贝
        // 1.先开辟空间
        this->p = new int[10]; // 深拷贝
        // 2.再拷贝数据
        memcpy(this->p, other.p, sizeof(int[10]));
        cout << "深拷贝构造函数" << endl;
    }
    Stu& operator=(const Stu& other)
    { // 赋值运算符重载
        // 1.先判断是否是同一个对象，如果是同一个对象，直接返回自身
        if (this == &other) {
            return *this;
        }
        // 2.释放原有资源
        if (this->p != nullptr) // 防止重复释放
        {
            delete[] this->p;
            this->p = NULL;
        }
        // 3.深拷贝
        this->name = other.name;
        this->age = other.age;
        // 3.1先开辟空间
        this->p = new int[10];
        // 3.2再拷贝数据
        memcpy(this->p, other.p, sizeof(int[10]));
        cout << "赋值运算符重载" << endl;
        return *this;
    }

    ~Stu()
    { // 析构函数
        if (this->p != nullptr) // 防止重复释放
        {
            delete[] this->p;
            this->p = NULL;
        }
        cout << "析构函数" << endl;
    }
    void show()
    { // 成员函数
        cout << "name:" << name << "age:" << age << endl;
    }
    int getAge() const // 常函数
    {
        return this->age;
    }
	//note:重载运算符的函数必须是成员函数
	//note:常函数是指函数后面加const，常函数内不能修改成员属性
    int operator-(const Stu& other) const
    {
		cout<<"重载-运算符"<<endl;
        return this->age - other.age;
    }
}; // end of class Stu

const Stu& compare(const Stu& stu1, const Stu& stu2)
{
    return stu1.getAge() > stu2.getAge() ? stu1 : stu2;
}

int main()
{
    Stu s1("张三", 18);
    Stu s2(s1); // 拷贝构造函数
    s1.show();
    s2.show();

    Stu s3("李四", 20);
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