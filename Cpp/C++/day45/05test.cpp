#include <iostream>
using namespace std;
// 智能指针auto_ptr
// note:auto_ptr是一个模板类，它的模板参数是指针所指向的类型,它的作用是自动释放指针所指向的内存
template <typename T>
class auto_ptr {
public:
    auto_ptr(T* p = nullptr)
        : m_p(p)
    {
    }
    ~auto_ptr() { delete m_p; }
    T* operator->() { return m_p; }
    T& operator*() { return *m_p; }
    // 重载赋值运算符
    auto_ptr<T>& operator=(auto_ptr<T>& rhs)
    {
        if (this != &rhs) {//防止自赋值
            delete m_p;//释放原来的内存
            m_p = rhs.m_p;//将rhs的指针指向的内存交给自己
            rhs.m_p = nullptr;//将rhs的指针置空
        }
        return *this;
    }

private:
    T* m_p;
};

int main()
{
    auto_ptr<int> ap1(new int(10));
    auto_ptr<int> ap2(ap1);
    cout << *ap2 << endl;

    return 0;
}