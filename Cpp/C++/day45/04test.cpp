#include <iostream>
using namespace std;
// 实现包装器
template <typename T>
class Wrapper {
public:
    Wrapper(T* p = NULL)
        : m_p(p)
    {
    }
    ~Wrapper() { delete m_p; }
    T* operator->() { return m_p; }
    T& operator*() { return *m_p; }

private:
    T* m_p;
};

class Person {
public:
    Person(int age)
        : m_age(age)
    {
    }
    void showAge() { cout << "age = " << m_age << endl; }

private:
    int m_age;
};

int main()
{
    Wrapper<Person> wp(new Person(10));
    wp->showAge();
    (*wp).showAge();

    return 0;
}