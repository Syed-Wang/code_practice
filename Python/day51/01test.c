#include <stdio.h>

int main(int argc, const char* argv[])
{
    int a = 5;
    int b = (++a) + (++a) + (++a);//
    printf("a=%d,b=%d\n", a, b);

    return 0;
}