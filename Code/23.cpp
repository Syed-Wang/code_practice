#include <iostream>
using namespace std;

// 问题描述：打印出如下的图案（菱形）
// *
// ***
// *****
// *******
// *****
// ***
// *
// 程序分析：先把图形分成两部分来看待，前四行一个规律，后三行一个规律，利用双重for循环，第一层控制行，第二层控制列。
int main()
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5 - 2 * i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}