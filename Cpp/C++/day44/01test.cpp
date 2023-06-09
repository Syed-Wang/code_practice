#include <iostream>
using namespace std;

class Student {
private:
    string m_name;
    int m_age;

public:
    Student()
    {
    }
    Student(string name, int age);
    // Student(string name = "no name", int age = 0); // 构造函数可以有默认参数
    void setname(string name);
    void setage(int age);
    void show();
};

int main()
{
    Student* stu = new Student;
    stu->setname("zhangsan");
    stu->setage(20);
    stu->show();
    Student stu1;
    stu1.show(); // 随机值

    cout << sizeof(stu1) << endl; // 对象的大小
    // cout << sizeof(stu) << endl; // 指针变量的大小8个字节
    cout << sizeof(*stu) << endl; // 指针指向的对象的大小
    cout << sizeof(Student) << endl; // 类的大小
                                     // note:Student类也是一种数据类型，所以也有大小，也可以用sizeof来获取数据类型的大小

    delete (stu);
    stu = nullptr;

    return 0;
}


Student::Student(string name, int age)
{
    m_name = name;
    m_age = age;
}
void Student::setname(string name)
{
    m_name = name;
}
void Student::setage(int age)
{
    m_age = age;
}
void Student::show()
{
    cout << m_name << " " << m_age << endl;
}