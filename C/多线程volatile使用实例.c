#include <errno.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h> // exit
#include <unistd.h> // sleep
#define PRINT_ERR(msg)      \
    do {                    \
        perror(msg);        \
        exit(EXIT_FAILURE); \
    } while (0)
// 对于这个代码，如果num变量不加volatile，使用gcc编译
// 的使用如果加上-O1 -O2 -O3优化等级（数字越大优化等级越高）
// 会发现task2线程不能够退出，因为编译器对num变量进行了优化
// 认为num的值一直都是0，所以出现了死循环，为了解决这个问题
// 就需要在num变量前加volatile，不让编译器对其优化，每次都能
// 得到想要的结果。
// 总结：多线程访问全局变量的时候，对变量加volatile。
volatile int num = 0;
void* task1(void* arg)
{
    sleep(2);
    num = 1;
    printf("线程1退出了...\n");
    pthread_exit(NULL);
}
void* task2(void* arg)
{
    while (num == 0)
        ;
    printf("线程2退出了...\n");
    pthread_exit(NULL);
}
int main(int argc, const char* argv[])
{
    pthread_t tid1, tid2;

    if ((errno = pthread_create(&tid1, NULL, task1, NULL)) != 0)
        PRINT_ERR("pthread_create error");
    if ((errno = pthread_create(&tid2, NULL, task2, NULL)) != 0)
        PRINT_ERR("pthread_create error");

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    return 0;
}