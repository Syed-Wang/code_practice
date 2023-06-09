#include <iostream>
#include <mutex>
// singleton 单例模式(懒汉式),轻量级线程安全懒汉式单例模式
/* note:懒汉式非线程安全，多线程下会出现多个实例，需要加锁，但是加锁会影响效率。
所以一般使用饿汉式，饿汉式线程安全，但是会浪费内存，因为在程序启动时就会创建实例，而不是在使用时才创建实例 */
using namespace std;

mutex m_mutex; // 定义一个互斥锁
class Singleton {
private:
    // 1.将构造函数私有化
    Singleton() {};
    /* // 将拷贝构造函数私有化
    Singleton(const Singleton& s) {};
    // 将赋值运算符重载函数私有化
    Singleton& operator=(const Singleton& s) {}; */
    // 2.定义一个静态的私有的本类对象
    static Singleton* m_pInstance;

public:
    // 3.提供一个公有的静态的函数，用于获取本类对象
    static Singleton* getInstance()
    {
        if (m_pInstance == nullptr) // 双重检查锁定，提高效率
        {
            lock_guard<mutex> lock(m_mutex); // 加锁
            if (m_pInstance == nullptr) {
                m_pInstance = new Singleton();
            }
        }

        return m_pInstance;
    }
    // 4.C++11中，可以使用delete关键字，禁止拷贝构造和赋值运算符重载函数
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};
// 5.在类外初始化静态成员变量
Singleton* Singleton::m_pInstance = nullptr;

int main()
{

    return 0;
}