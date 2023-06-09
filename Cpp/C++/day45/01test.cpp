#include <iostream>
using namespace std;
// 类模板

template <typename T1, typename T2>
class Person {
protected:
    T1 m_Name;
    T2 m_Age;

public:
    Person(T1 name, T2 age);
    virtual void showPerson() = 0; // 纯虚函数
};

template <typename T1, typename T2, typename T3>
class Stu : public Person<T1, T2> {
private:
    T3 m_Score;

public:
    Stu(T1 name, T2 age, T3 score);
    void showPerson() override;
};

int main()
{
    Stu<string, int, int> s("Tom", 18, 100);
    s.showPerson();

    return 0;
}

//类模板成员函数类外实现
template <typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}

template <typename T1, typename T2, typename T3>
Stu<T1, T2, T3>::Stu(T1 name, T2 age, T3 score)
    : Person<T1, T2>(name, age)
{
    this->m_Score = score;
}

template <typename T1, typename T2, typename T3>
void Stu<T1, T2, T3>::showPerson()
{
    cout << "name: " << this->m_Name << " age: " << this->m_Age << " score: " << this->m_Score << endl;
}