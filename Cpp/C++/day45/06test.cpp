#include <iostream>
using namespace std;

// 智能指针Shared_ptr
template <typename T>
class Shared_ptr {
private:
    T* m_p; // 指针
    int* m_ref; // 引用计数
public:
    // 构造函数
    Shared_ptr(T* p = nullptr)
        : m_p(p)
        , m_ref(new int(1)) // 引用计数初始化为1
    {
    }
    // 析构函数
    ~Shared_ptr()
    { // 引用计数减1，如果为0，释放内存
        if (--(*m_ref) == 0) {
            delete m_p; // 释放指针指向的内存
            delete m_ref; // 引用计数为0，释放引用计数
        }
    }
    // 拷贝构造函数
    Shared_ptr(const Shared_ptr<T>& rhs)
        : m_p(rhs.m_p)
        , m_ref(rhs.m_ref)
    {
        ++(*m_ref); // 引用计数加1
    }
    // 重载赋值运算符
    Shared_ptr<T>& operator=(const Shared_ptr<T>& rhs)
    {
        if (this != &rhs) { // 防止自赋值
            if (--(*m_ref) == 0) { // 引用计数减1，如果为0，释放内存
                delete m_p;
                delete m_ref;
            }
            m_p = rhs.m_p;
            m_ref = rhs.m_ref;
            ++(*m_ref); // 引用计数加1
        }
        return *this;
    }
    T* operator->() { return m_p; }
    T& operator*() { return *m_p; }
    int use_count() { return *m_ref; } // 返回引用计数
};

int main()
{
    /* Shared_ptr<int> sp1(new int(10));
    Shared_ptr<int> sp2(sp1);
    cout << *sp2 << endl;
    cout << sp2.use_count() << endl;
    Shared_ptr<int> sp3(new int(20));
    sp3 = sp2;
    cout << *sp3 << endl;
    cout << sp3.use_count() << endl; */
    Shared_ptr<int> sp1;
    cout << sp1.use_count() << endl;
    Shared_ptr<int> sp2(sp1);
    cout << sp2.use_count() << endl;
    Shared_ptr<int> sp3(new int(20));
    sp3 = sp2;
    cout << sp3.use_count() << endl;

    return 0;
}