#include <stdio.h>
#include <string.h>

int main()
{
    char* p = "123456789";
    char data[5];
    strcpy(data, p);
    printf("%s\n", data);

    return 0;
}