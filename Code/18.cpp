#include <iostream>
using namespace std;
// 问题描述：
// 输入两个整数a和n，输出a+aa+aaa+…+aa…a（n个a）的值。
// 程序分析：
int main()
{
    int a, n, aa, sum = 0;
    cout << "Please enter a number and the count: ";
    cin >> a >> n;

    aa = a;
    while (n) {
        sum += aa;
        aa = aa * 10 + a;
        --n;
    }

    cout << sum << endl;

    return 0;
}