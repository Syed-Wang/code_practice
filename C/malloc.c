/**
 * @file malloc.c
 * @author sy wang (wangsy8421@gmail.com)
 * @brief malloc函数最大可分配内存测试(win下使用64位编译，linux下使用32位编译-m32)
 * @version 0.1
 * @date 2023-06-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
    int count = 0;
    while (malloc(1 << 20)) {
        count++;
    }
    printf("Allocated %d MB total\n", count);

    return 0;
}