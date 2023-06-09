#include <cmath>
#include <iostream>
using namespace std;
// 问题描述：
// 判断101-200之间有多少个素数，并输出所有素数。
// 素数：只能被1和它本身整除的正整数（1不是素数）
// 素数：2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 ……
// 程序分析：
// 判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。
int main()
{
    int count = 0, j;

    for (int i = 101; i <= 200; i++) {
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i)) {
            count++;
            cout << i << endl;
        }
    }
    cout << "count = " << count << endl;

    return 0;
}