#include <stdio.h>

void func()
{
}

int main(int argc, const char* argv[])
{
    void (*p1)() = func;
    void (*p2)() = &func;

    printf("%ld\n", sizeof(func));
    printf("*******************\n");
    printf("%p func\n", func);
    printf("%p p1(func)\n", p1);
    printf("%p p2(&func)\n", p2);
    printf("*******************\n");
    printf("%p\n", func + 1);
    printf("%p\n", p1 + 1);
    printf("%p\n", p2 + 1);

    return 0;
}