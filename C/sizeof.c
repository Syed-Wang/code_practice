#include <stdio.h>

int main(int argc, const char* argv[])
{
    int a = 10;
	/*printf("%d\n", a++);
	printf("%d\n", a);
	printf("%d\n", ++a);
	printf("%d\n", a); */

	printf("%lu, %d\n", sizeof(a), a);
	printf("%lu, %d\n", sizeof(++a), a);
    printf("%lu, %d\n", sizeof(a++), a); 

    return 0;
}