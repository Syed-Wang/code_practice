#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
    printf("%ld\n",sizeof(void));
    /* int* p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("p = %p, *p+1 = %d\n", p, *p+1);
    printf("sizeof(*p) = %ld\n", sizeof(*p));
    free(p);
    printf("sizeof(*p) = %ld\n", sizeof(*p));
    p = NULL;
    printf("sizeof(*p) = %ld\n", sizeof(*p));
    printf("p = %p, *p+1 = %d\n", p, *p+1);
    printf("sizeof(*p) = %ld\n", sizeof(*p)); */

    return 0;
}