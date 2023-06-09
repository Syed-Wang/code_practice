#include <stdio.h>

int main(int argc, const char* argv[])
{
    double sum = 0, a = 1, b = 2, i = 0;
    while (i < 20) {
        sum += b / a;
        b += a;
        a = b - a;
        i++;
    }
    printf("sum = %.2lf\n", sum);

    return 0;
}