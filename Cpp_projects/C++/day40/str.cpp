/* 封装自定义一个字符串类型：要求实现：
	下标运算符，+，<<  */
#include <iostream>
#include <cstring>

using namespace std;

class Mystring{
private:
	char* str;
public:
	Mystring(const char* str = NULL);// 普通构造函数
	Mystring(const Mystring& other);// 拷贝构造函数
	~Mystring();// 析构函数
	Mystring& operator=(const Mystring& other);// 赋值运算符重载
	char& operator[](int index);// 下标运算符重载
	Mystring operator+(const Mystring& other);// +运算符重载
	friend ostream& operator<<(ostream& os, const Mystring& other);// <<运算符重载
};

int main()
{
	
	
	return 0;
}

Mystring::Mystring(const char* str)
{
	if (str == NULL) {// 如果传入的字符串为空，则创建一个空字符串
		this->str = new char[1];
		this->str[0] = '\0';
	}
	else {// 如果传入的字符串不为空，则创建一个与传入字符串相同的字符串
		int len = strlen(str);
		this->str = new char[len + 1];
		memcpy( this->str, str, len + 1 );
	}
}
Mystring::Mystring(const Mystring& other){
	int len = strlen(other.str);
	this->str=new char[len+1];
	memcpy(this->str,other.str,len+1);
}
Mystring::~Mystring(){
	delete[] this->str;	
}
Mystring& Mystring::operator=( const Mystring& other ){
	if (this == &other) {
		return *this;
	}
	delete[] this->str;
	int len = strlen(other.str);
	this->str = new char[len + 1];
	memcpy(this->str, other.str, len + 1);
	return *this;
}
char& Mystring::operator[](int index){
	return this->str[index];
}
Mystring Mystring::operator+(const Mystring& other){
	int len1 = strlen(this->str);
	int len2 = strlen(other.str);
	char* temp = new char[len1 + len2 + 1];
	memcpy(temp, this->str, len1);
	memcpy(temp + len1, other.str, len2 + 1);
	Mystring newstr(temp);
	delete[] temp;
	return newstr;
}
ostream& operator<<(ostream& os, const Mystring& other){
	os << other.str;
	return os;
}