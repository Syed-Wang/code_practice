// 判断括号是否匹配
// 使用链栈

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char data;
    struct node* next;
} linkstack_t;

char pair[] = { '(', ')', '{', '}', '[', ']' };

int main(int argc, const char* argv[])
{
    linkstack_t* stack = (linkstack_t*)malloc(sizeof(linkstack_t));
    stack->next = NULL;
    char ch;
    char buf[256] = { 0 };
    linkstack_t* tmp;
    while (ch = fgetc(stdin)) {
        if (ch == '\n') {
            if (stack->next) {
                strcat(buf, "false\n");
            } else {
                strcat(buf, "true\n");
            }
            break;
        } else if (!strchr(pair, ch)) {
            strcat(buf, "input error\n");
            break;
        } else if (!((strchr(pair, ch) - pair) % 2)) {
            tmp = (linkstack_t*)malloc(sizeof(linkstack_t));
            tmp->data = ch;
            tmp->next = stack->next;
            stack->next = tmp;
        } else if ((strchr(pair, ch) - strchr(pair, stack->next->data)) == 1) {
            tmp = stack->next;
            stack->next = tmp->next;
            free(tmp);
        }
    }
    printf("%s", buf);

    return 0;
}