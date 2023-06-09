#include <iostream>
using namespace std;

inline void swap(int* a, int* b) // 指针交换
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
inline void swap(int& a, int& b) // 引用交换
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << m << " " << n << endl;
    swap(m, n); // 使用引用交换
    cout << m << " " << n << endl;

    return 0;
}