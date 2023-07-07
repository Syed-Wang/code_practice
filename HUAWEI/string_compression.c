/**
 * @file string_compression.c
 * @author sy wang (wangsy8421@gmail.com)
 * @brief 利用字符重复出现的次数，实现基本的字符串压缩功能。比如，字符串aabcccccaaa会变为a2b1c5a3。若压缩后的字符串没有变短，则返回原先的字符串。输入只存在小写字符。
 * @version 0.1
 * @date 2023-07-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>

void str_compression(char* str, char* new_str)
{
    char ch = str[0];
    int count = 1;
    int i = 1;
    char count_str[10];
    while (str[i]) {
        if (str[i] == ch) {
            count++;
        } else {
            strcat(new_str, &ch);
            sprintf(count_str, "%d", count);
            strcat(new_str, count_str);
            ch = str[i];
            count = 1;
        }
        i++;
    }
    strcat(new_str, &ch);
    sprintf(count_str, "%d", count);
    strcat(new_str, count_str);
}

int main(int argc, const char* argv[])
{
    char str[256] = { 0 };
    char new_str[256] = { 0 };
    scanf("%s", str);
    str_compression(str, new_str);
	if (strlen(new_str) < strlen(str)) {
		printf("%s\n", new_str);
	} else {
		printf("%s\n", str);
	}

    return 0;
}