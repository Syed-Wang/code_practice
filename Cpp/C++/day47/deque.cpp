#include <deque>
#include <iostream>
using namespace std;
// note: deque是一个双端队列，支持在头尾两端进行插入和删除操作
//  栈
template <typename T, typename Container = deque<T>>
class stack {
public:
    void push(const T& x) // 入栈
    {
        _con.push_back(x);
    }
    void pop() // 出栈
    {
        _con.pop_back();
    }
    const T& top() const // 返回栈顶元素
    {
        return _con.back();
    }
    size_t size() const // 返回栈中元素个数
    {
        return _con.size();
    }
    bool empty() const // 判断栈是否为空
    {
        return _con.empty();
    }

private:
    Container _con; // 底层容器
};
// 队列
template <typename T, typename Container = deque<T>>
class queue {
public:
    void push(const T& x) // 入队
    {
        _con.push_back(x);
    }
    void pop() // 出队
    {
        _con.pop_front();
    }
    const T& front() const // 返回队首元素
    {
        return _con.front();
    }
    const T& back() const // 返回队尾元素
    {
        return _con.back();
    }
    size_t size() const // 返回队列中元素个数
    {
        return _con.size();
    }
    bool empty() const // 判断队列是否为空
    {
        return _con.empty();
    }

private:
    Container _con;
};

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}