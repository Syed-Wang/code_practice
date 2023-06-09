#include <stdio.h>
#define N 8

int main(int argc, const char* argv[])
{
    int i, j, k;

    for (i = 0; i < N; ++i) {
        for (j = 0; j < i + 1; ++j) {
            printf("*");
            for (k = 0; k < i; ++k) {
                printf(".");
            }
        }
		printf("\n");
    }

    return 0;
}