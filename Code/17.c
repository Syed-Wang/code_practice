#include <stdio.h>
// 问题描述：
// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
// 程序分析：
// 通过使用getchar()函数，每次读入一个字符，直到输入的字符为回车符为止。
// 利用while语句,条件为输入的字符不为'\n'。
int main(int argc, const char* argv[])
{
    char c;
    int letters = 0, space = 0, digit = 0, others = 0;
    printf("Please input some characters:\n");
    while ((c = getchar()) != '\n') { // getchar()函数从键盘读取一个字符
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        } else if (c == ' ') {
            space++;
        } else if (c >= '0' && c <= '9') {
            digit++;
        } else {
            others++;
        }
    }
    printf("There are %d letters, %d spaces, %d digits and %d others.\n", letters, space, digit, others);

    return 0;
}