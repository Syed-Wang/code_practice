#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char * argv[])
{
	// 不会报错
	free(NULL); // free(NULL) is a no-op

	return 0;
}