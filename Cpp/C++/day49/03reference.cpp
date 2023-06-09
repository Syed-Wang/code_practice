#include <iostream>
using namespace std;

int main()
{
	int n = 100;
    float *p = (float*)&n;
    *p = 19.625f;
    cout << n << endl;
	cout << *p << endl;
	
	return 0;
}