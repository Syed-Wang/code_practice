#include <iostream>
using namespace std;

int main()
{
    // npos is a static member of string class, it is a constant, it is the maximum value of size_t
    cout << string::npos << endl;
    cout << sizeof(string::npos) << endl; // 8
    cout << sizeof(size_t) << endl; // 8
    cout << "-----------------" << endl;
    cout << sizeof(int) << endl; // 4
    cout << sizeof(long) << endl; // 4/8
    cout << sizeof(long long) << endl; // 8

    return 0;
}