#include <stdio.h>
// 九九乘法表
int main(int argc, const char* argv[])
{
    int ret;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < i + 1; j++) {
            ret = i * j;
            printf("%d*%d=%-3d", i, j, ret); // -3d表示左对齐，占3位
        }
        printf("\n");
    }

    return 0;
}