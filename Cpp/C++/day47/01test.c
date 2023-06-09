#include <stdio.h>

int main(int argc, const char* argv[])
{
    char s[] = "hello";
    printf("%s\n", s);
    scanf("%c", s+1);
    printf("%s\n", s);

    return 0;
}