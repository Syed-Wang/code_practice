#include <iostream>
using namespace std;

// 人类
class People {
public:
    /* People();
    People(string name, int age); */
    People(string name = "无名氏", int age = 0);

protected:
    string m_name;
    int m_age;
};
/* People::People()
{
    cout << "People()" << endl;
}
People::People(string name, int age)
    : m_name(name)
    , m_age(age)
{
    cout << "People(string name,int age)" << endl;
} */
People::People(string name, int age)
    : m_name(name)
    , m_age(age)
{
    cout << "People(string name,int age)" << endl;
}
// 学生类
class Student : public People {
public:
    Student();
    Student(string name, int age, int score);
    void show();

private:
    int m_score;
};
Student::Student()
{
    cout << "Student()" << endl;
}
Student::Student(string name, int age, int score)
    : People(name, age)
    , m_score(score)
{
    cout << "Student(string name,int age,int score)" << endl;
}
void Student::show()
{
    cout << "name:" << m_name << " age:" << m_age << " score:" << m_score << endl;
}

int main()
{
    Student s1;
    s1.show();

    Student s2("张三", 20, 100);
    s2.show();

    return 0;
}