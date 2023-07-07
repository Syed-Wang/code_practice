/**
 * @file textspeak.c
 * @brief 火星文计算
 * @note 已知火星人使用的运算符为#、$, 其与地球人的等价公式如下:x#y=2*x+3*y+4，x$y=3*x+y+2，$优先级高于#，请编写一个程序，输入一个火星人的运算式，输出其等价的地球人运算结果。
 * @version 0.1
 * @date 2023-07-06
 *
 * @copyright Copyright (c) 2023
 * @note 解题思路:
 * 			 1. 读取输入字符串, 保存数字和运算符
 * 			 2. 从左到右遍历运算符, 优先计算$, 并将结果替换为原来的数字, 并删除相应的数字和运算符
 * 			 3. 从左到右遍历运算符, 计算#运算符, 并将结果替换为原来的数字, 并删除相应的数字和运算符
 * 			 4. 输出最终结果
 */

#include <stdio.h>
#include <string.h>

int op1(int x, int y)
{
    return 3 * x + y + 2;
}

int op2(int x, int y)
{
    return 2 * x + 3 * y + 4;
}

int main()
{
    // 输入处理
    char line[2000];
    fgets(line, 2000, stdin);
    int nums[1000], num_count = 0;
    char operators[1000], op_count = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (line[i] >= '0' && line[i] <= '9') {
            int num = 0;
            while (i < strlen(line) && line[i] >= '0' && line[i] <= '9') {
                num = num * 10 + line[i] - '0';
                i++;
            }
            nums[num_count++] = num;
            i--;
        } else if (line[i] == '$' || line[i] == '#') {
            operators[op_count++] = line[i];
        }
    }

    for (int i = 0; i < op_count; i++) {
        if (operators[i] == '$') {
            nums[i] = op1(nums[i], nums[i + 1]);
            for (int j = i + 1; j < num_count - 1; j++) {
                nums[j] = nums[j + 1];
            }
            for (int j = i; j < op_count - 1; j++) {
                operators[j] = operators[j + 1];
            }
            num_count--;
            op_count--;
            i--;
        }
    }

    int result = nums[0];
    for (int i = 1; i < num_count; i++) {
        result = op2(result, nums[i]);
    }
    printf("%d", result);

    return 0;
}
