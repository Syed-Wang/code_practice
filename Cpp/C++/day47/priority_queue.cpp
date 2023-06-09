#include <iostream>
#include <vector>
using namespace std;
// priority queue
template <typename T, typename Container = vector<T>, typename Campare = less<T>>
class Priority_queue {
public:
    Priority_queue()
    {
    }
    ~Priority_queue()
    {
    }
    void push(const T& x)
    {
        _c.push_back(x);
        // adjust
        adjust_up(_c.size() - 1);
    }
    void pop()
    {
        swap(_c[0], _c[_c.size() - 1]);
        _c.pop_back();
        adjust_down(0);
    }
    T& top()
    {
        //return _c[0];
		return _c.front();
    }
    size_t size()
    {
        return _c.size();
    }
    bool empty()
    {
        return _c.empty();
    }

private:
    void adjust_up(int child)
    {
        int parent = (child - 1) / 2;
        while (child > 0) {
            if (_cmp(_c[child], _c[parent])) {
                swap(_c[child], _c[parent]);
                child = parent;
                parent = (child - 1) / 2;
            } else {
                break;
            }
        }
    }
    void adjust_down(int parent)
    {
        int child = parent * 2 + 1;
        while (child < _c.size()) {
            if (child + 1 < _c.size() && _cmp(_c[child + 1], _c[child])) {
                child++;
            }
            if (_cmp(_c[child], _c[parent])) {
                swap(_c[child], _c[parent]);
                parent = child;
                child = parent * 2 + 1;
            } else {
                break;
            }
        }
    }

private:
    Container _c;
    Campare _cmp;
};

int main()
{

    return 0;
}