#include <iostream>
//静态类型转换运算符 static_cast<>()
using namespace std;

int main()
{
	double d= 13.14;
	int a = (int)d;
	cout<<a<<endl;
	cout <<static_cast<int>(d)<<endl;

	double* p = &d;
	int* q = (int*)p;
	cout<<*q<<endl;
	//cout<<*static_cast<int*>(p)<<endl;//static_cast is used to convert one type to another type

	return 0;
}