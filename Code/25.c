// 问题描述：输入一行字符，删除重复字符后输出。

#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
    char old[256] = { 0 }, new[256] = { 0 };
    printf("Please input a string:\n");
    fgets(old, sizeof(old), stdin); // 可以读取空格
    if (old[strlen(old) - 1] == '\n')
        old[strlen(old) - 1] = '\0';
    // int j;
    for (int i = 0; i < strlen(old); i++) {
        /* for (j = 0; j < strlen(new); j++) {
            if (old[i] == new[j])
                break;
        }
        if (j == strlen(new)) */
        if (!strchr(new, old[i])) // strchr()函数用于检索字符串中指定字符的第一次出现的位置，返回值为指向该字符的指针，如果未找到指定字符，则返回空指针。
            new[strlen(new)] = old[i];
    }

    printf("%s\n", new);
    return 0;
}