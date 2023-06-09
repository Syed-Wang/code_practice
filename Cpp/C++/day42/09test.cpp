#include <iostream>
using namespace std;

void print() // 递归终止条件
{
    cout << "end" << endl;
}

template <typename firstArg, typename... arg>
void print(firstArg first, arg... args)
{
    cout << first << " "; // 打印第一个参数
    print(args...); // 递归调用
}

int main()
{
	print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

    return 0;
}