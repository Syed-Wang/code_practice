#include <stdio.h>

int main(int argc, const char* argv[])
{
    const int a = 10;
    int* p = (int*)&a; // 必须强制类型转换
    *p = 20; // C可以通过指针修改常量的值，应为是直接去内存中读取数据
    printf("%d\n", a);

    return 0;
}