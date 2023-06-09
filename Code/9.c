#include <stdio.h>
// 国际象棋棋盘
int main(int argc, const char* argv[])
{
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) { // 奇数行偶数列或偶数行奇数列，打印■
                printf("%c%c", 219, 219);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}