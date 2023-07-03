#include <stdio.h>

struct stu {
    char* name;
    int age;
} stu1;

int main(int argc, const char* argv[])
{
    stu1.name = "zhangsan";
    stu1.age = 20;
    printf("name: %s, age: %d\n", stu1.name, stu1.age);

    return 0;
}