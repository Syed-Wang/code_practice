#include <stdio.h>
// 打印出如下图案（菱形）
int main(int argc, const char* argv[])
{
	printf("我是10.c\n");
    int i, j;
    printf("\1\1\n"); // 输出两个字符
    for (i = 1; i < 11; i++) {
        for (j = 1; j <= i; j++) { // 每行输出的个数与行数相等
            printf("%c%c", 219, 219);
        }
        printf("\n");
    }

    return 0;
}