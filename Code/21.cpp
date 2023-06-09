#include <iostream>
using namespace std;

// 问题描述：猴子吃桃问题
// 有一堆桃子，猴子第一天吃了其中的一半，并再多吃了一个！
// 以后每天猴子都吃其中的一半，然后再多吃一个。
// 当到第十天时，想再吃时（即还没吃），发现只有一个桃子了。
// 问题：最初共多少个桃子？
// 程序分析：采取逆向思维的方法，从后往前推断。
int main()
{
    int sum = 1; // 第十天桃子数
    for (int i = 9; i > 0; i--) { // 从第九天开始循环
        sum = (sum + 1) * 2; // 第i天桃子数
    }
    cout << sum << endl;

    return 0;
}