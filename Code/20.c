#include <stdio.h>

// 问题描述：一球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
// 程序分析：无
int main(int argc, const char* argv[])
{
    double sn = 100.0, hn = sn / 2; // sn是第一次落地时共经过的米数，hn是第一次反弹的高度
    for (int i = 2; i <= 10; i++) {
        sn = sn + 2 * hn; // 第i次落地时共经过的米数
        hn = hn / 2; // 第i次反弹的高度
    }

    printf("第10次落地时，共经过%.2f米\n", sn);
    printf("第10次反弹%.2f米\n", hn);
}