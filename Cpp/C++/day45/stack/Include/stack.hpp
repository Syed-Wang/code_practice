#ifndef __STACK_H__
#define __STACK_H__
// note:重点
#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* m_pStack; // 指向栈空间的指针
    int m_iSize; // 栈空间的大小
    int m_iTop; // 栈顶元素的下标

public:
    Stack(int size); // 构造函数
    ~Stack(); // 析构函数
    bool stackEmpty(); // 判断栈是否为空
    bool stackFull(); // 判断栈是否为满
    void clearStack(); // 清空栈
    int stackLength(); // 返回栈的长度
    bool push(T elem); // 入栈
    bool pop(T& elem); // 出栈
    void stackTraverse(bool isFromButtom); // 遍历栈
};

template <typename T>
Stack<T>::Stack(int size)
{
    this->m_iSize = size;
    this->m_pStack = new T[this->m_iSize];
    this->m_iTop = 0;
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] this->m_pStack;
    this->m_pStack = NULL;
}

template <typename T>
bool Stack<T>::stackEmpty()
{
    if (0 == this->m_iTop) {
        return true;
    } else {
        return false;
    }
}

template <typename T>
bool Stack<T>::stackFull()
{
    if (this->m_iTop == this->m_iSize) {
        return true;
    } else {
        return false;
    }
}

template <typename T>
void Stack<T>::clearStack()
{
    this->m_iTop = 0;
}

template <typename T>
int Stack<T>::stackLength()
{
    return this->m_iTop;
}

template <typename T>
bool Stack<T>::push(T elem)
{
    if (this->stackFull()) {
        return false;
    } else {
        this->m_pStack[this->m_iTop] = elem;
        this->m_iTop++;
        return true;
    }
}

template <typename T>
bool Stack<T>::pop(T& elem)
{
    if (this->stackEmpty()) {
        return false;
    } else {
        this->m_iTop--;
        elem = this->m_pStack[this->m_iTop];
        return true;
    }
}

template <typename T>
void Stack<T>::stackTraverse(bool isFromButtom)
{
    if (isFromButtom) {
        for (int i = 0; i < this->m_iTop; i++) {
            cout << this->m_pStack[i] << " ";
        }
    } else {
        for (int i = this->m_iTop - 1; i >= 0; i--) {
            cout << this->m_pStack[i] << " ";
        }
    }
    cout << endl;
}

#endif // !__STACK_H__