#include <stdio.h>

/**
 * @brief 计算一个数的平方
 * 
 * @param ptr 
 * @return int 
 */
int square(volatile int* ptr)
{
    return *ptr * *ptr;
}

int main(int argc, const char* argv[])
{
    int a = 10;
    printf("%d\n", square(&a));

    return 0;
}