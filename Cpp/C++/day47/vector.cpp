#include <iostream>
using namespace std;
// 实现一个vector类
template <typename T>
class Vector {
    T* _start; // 指向数组的第一个元素
    T* _finish; // 指向数组的最后一个元素的下一个位置
    T* _end_of_storage; // 指向数组的最后一个位置的下一个位置
public:
    // 构造函数
    Vector()
        : _start(nullptr)
        , _finish(nullptr)
        , _end_of_storage(nullptr)
    {
    }
    // 析构函数
    ~Vector()
    {
        if (_start) {
            delete[] _start; // 释放数组
            _start = _finish = _end_of_storage = nullptr;
        }
    }
    // 通过迭代器构造函数
    Vector(T* first, T* last)
        : _start(nullptr)
        , _finish(nullptr)
        , _end_of_storage(nullptr)
    {
        size_t size = last - first;
        _start = new T[size];
        for (size_t i = 0; i < size; ++i) {
            _start[i] = first[i];
        }
        _finish = _start + size;
        _end_of_storage = _finish;
    }
    // 交换函数
    void Swap(Vector<T>& v)
    { // 交换三个指针
        swap(_start, v._start);
        swap(_finish, v._finish);
        swap(_end_of_storage, v._end_of_storage);
    }
    // 拷贝构造函数
    Vector(const Vector<T>& v)
        : _start(nullptr)
        , _finish(nullptr)
        , _end_of_storage(nullptr)
    {
        Vector<T> tmp(v._start, v._finish); // 通过迭代器构造函数创建一个临时对象
        Swap(tmp); // 交换临时对象和原对象的内容
    }
    // 赋值运算符重载
    Vector<T>& operator=(const Vector<T>& v)
    {
        if (this != &v) { // 防止自赋值
            Vector<T> tmp(v); // 通过拷贝构造函数创建一个临时对象
            Swap(tmp); // 交换临时对象和原对象的内容
        }
        return *this;
    }
    // 尾部插入
    void push_back(const T& x)
    {
        if (_finish == _end_of_storage) { // 没有空间了
            size_t size = this->size();
            size_t newcapacity = size == 0 ? 1 : 2 * size;
            T* tmp = new T[newcapacity]; // 申请新空间
            for (size_t i = 0; i < size; ++i) { // 拷贝原来的数据
                tmp[i] = _start[i];
            }
            delete[] _start; // 释放原来的空间
                             // 更新三个指针
            _start = tmp;
            _finish = _start + size;
            _end_of_storage = _start + newcapacity; // 更新容量
        }
        *_finish++ = x;
    }
    // 尾部删除
    void pop_back()
    {
        // 实现容量收缩
        //  1. 判断当前容量是否大于size的两倍
        //  2. 如果大于，申请一个新的空间，容量为size
        //  3. 拷贝原来的数据
        //  4. 释放原来的空间
        //  5. 更新三个指针
        if (capacity() > 2 * size()) {
            size_t size = this->size();
            size_t newcapacity = size == 0 ? 1 : 2 * size;
            T* tmp = new T[newcapacity]; // 申请新空间
            for (size_t i = 0; i < size; ++i) { // 拷贝原来的数据
                tmp[i] = _start[i];
            }
            delete[] _start; // 释放原来的空间
            // 更新三个指针
            _start = tmp;
            _finish = _start + size;
            _end_of_storage = _start + newcapacity; // 更新容量
        }
    }
    // 大小
    size_t size() const
    {
        return _finish - _start;
    }
    // 容量
    size_t capacity() const
    {
        return _end_of_storage - _start;
    }
    // 判空
    bool empty() const
    {
        return _finish == _start;
    }
    // 重载[]
    T& operator[](size_t pos) const
    {
        if (pos < size() || pos >= 0) {
            return _start[pos];
        } else {
            throw "out of range";
        }
    }
    // 清空
    void clear()
    {
        _finish = _start;
    }
};

int main()
{
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v[2] << endl;
    v[2] = 10;
    cout << v[2] << endl;

    Vector<int> v2(v);
    for (size_t i = 0; i < v2.size(); ++i) {
        cout << v2[i] << " ";
    }
    cout << endl;

	Vector<int> v3=v;
	for (size_t i = 0; i < v3.size(); ++i) {
		cout << v3[i] << " ";
	}
	cout << endl;

    return 0;
}