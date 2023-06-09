#include <iostream>
using namespace std;
/* 有一个Person类，私有数据成员name、age和sex分别表示人的姓名、年龄和性别。
雇员类Employee是Person的派生类，新增数据成员部门department和薪水salary。
请用C++代码描述这两个类，并用Employee类的成员函数Display实现雇员的姓名、年龄、性别、部门和薪水的输出。
（要求编写派生类的构造函数） */

// 基类Person
class Person {
private:
    // 私有数据成员
    string name; // 姓名
    int age; // 年龄
    char sex; // 性别
public:
    // 构造函数，用参数初始化数据成员
    Person(string n, int a, char s)
        : name(n)
        , age(a)
        , sex(s)
    {
    }
    // 受保护的访问函数，供派生类使用
protected:
    string getName() { return name; } // 获取姓名
    int getAge() { return age; } // 获取年龄
    char getSex() { return sex; } // 获取性别
};

// 派生类Employee
class Employee : public Person // 公有继承Person类
{
private:
    // 新增数据成员
    string department; // 部门
    double salary; // 薪水
public:
    // 构造函数，用参数初始化数据成员，同时调用基类的构造函数
    Employee(string n, int a, char s, string d, double sa)
        : Person(n, a, s)
        , department(d)
        , salary(sa)
    {
    }
    // 成员函数，输出雇员的信息
    void Display()
    {
        cout << "Name: " << getName() << endl; // 调用基类的访问函数获取姓名
        cout << "Age: " << getAge() << endl; // 调用基类的访问函数获取年龄
        cout << "Sex: " << getSex() << endl; // 调用基类的访问函数获取性别
        cout << "Department: " << department << endl; // 输出部门
        cout << "Salary: " << salary << endl; // 输出薪水
    }
};

int main()
{
	// 创建Employee类的对象
	Employee e("Tom", 20, 'M', "Sales", 5000);
	// 调用成员函数输出雇员的信息
	e.Display();

    return 0;
}