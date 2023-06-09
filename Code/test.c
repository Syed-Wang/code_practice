#include <stdio.h>

int main(int argc, const char* argv[])
{
    int a[] = { 2, 4, 6, 8 }, *p = a, i;
    for (i = 0; i < 4; i++) {
        a[i] = *++p;
        printf("%d, ", a[i]);
        printf("%d\n", *p);
    }

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