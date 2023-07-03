#include <stdio.h>

int main(int argc, const char* argv[])
{

    /* int s[5] = { 1, 2, 3, 4, 5 };
    int* p = (int*)((int)s + 1);
    printf("%x\n", *p); */

    /* int s[5] = {10, 20, 30, 40, 50};
    int *p7 = &s[0];
    //int v3 = ++(*p7);
    //printf("v3 = %d  s[0] = %d\n", v3, s[0]);
    int v3 = ++*p7;
    printf("v3 = %d  s[0] = %d\n", v3, s[0]); */

    /* int a[] = { 2, 4, 6, 8 }, *p = a, i;
    for (i = 0; i < 4; i++) {
        a[i] = *++p;
        printf("%d, ", a[i]);
        printf("%d\n", *p);
    } */

    /* int i,j;
        for(i=0;i<4;i++){
                for(j=0;j<2*i+1;j++){
                        printf("*");
                }
                printf("\n");
        }
        for(){

        } */

    return 0;
}