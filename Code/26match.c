// 判断括号是否匹配
// 输入描述：待判断的字符串，多个字符串需换行输入
// 输出描述：每个字符串的判断结果，多个结果需换行输出

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100 // 栈的最大长度

typedef struct stack {
    char data[MAX_LEN];
    int top;
} stack; // 栈的结构体

// 初始化栈
void init(stack* s)
{
    s->top = -1;
}

// 判断栈是否为空
int isEmpty(stack* s)
{
    return s->top == -1 ? 1 : 0;
}

// 判断栈是否已满
int isFull(stack* s)
{
    return s->top == MAX_LEN - 1 ? 1 : 0;
}

// 入栈
void push(stack* s, char c)
{
    if (isFull(s)) {
        printf("栈已满，无法入栈！\n");
        return;
    }
    s->data[++s->top] = c;
}

// 出栈
char pop(stack* s)
{
    if (isEmpty(s)) {
        printf("栈为空，无法出栈！\n");
        return 0;
    }
    return s->data[s->top--];
}

// 判断括号是否匹配
int isMatch(char* str)
{
    stack s;
    init(&s);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(&s, str[i]);
        } else if (str[i] == ')') {
            if (isEmpty(&s) || pop(&s) != '(') {
                return 0;
            }
        } else if (str[i] == ']') {
            if (isEmpty(&s) || pop(&s) != '[') {
                return 0;
            }
        } else if (str[i] == '}') {
            if (isEmpty(&s) || pop(&s) != '{') {
                return 0;
            }
        }
        i++;
    }
    if (isEmpty(&s)) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char str[100];
    while (scanf("%s", str) != EOF) {
        if (isMatch(str)) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }
    return 0;
}