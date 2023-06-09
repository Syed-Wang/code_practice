#include <iostream>
using namespace std;
// note:如果你希望看到经 Name Mangling 产生的新函数名，
// 可以只声明而不定义函数，这样调用函数时就会产生链接错误，从报错信息中就可以看到新函数名。
void display();
void display(int);

namespace ns {
void display();
}

class Demo {
public:
    void display();
};

int main()
{
    display();
    display(1);
    ns::display();
    Demo obj;
    obj.display();
    return 0;
}