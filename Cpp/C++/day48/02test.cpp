#include <iostream>
using namespace std;

int main()
{
    // volatile: the value of a can be changed by other programs
    volatile const int a = 10;
    volatile const int* p = &a;
    int* b = (int*)&a;
    *b = 20;
    cout << a << endl;
    cout << *p << endl;

    return 0;
}