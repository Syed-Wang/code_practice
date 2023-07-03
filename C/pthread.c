#include <pthread.h>
#include <stdio.h>

typedef struct __stu_t {
    char name[20];
    int age;
} stu_t;

void* thread_func(void* arg)
{
    // stu_t* stu = (stu_t*)arg;
    printf("thread_func: %s, %d\n", ((stu_t*)arg)->name, ((stu_t*)arg)->age);
}

int main(int argc, const char* argv[])
{
    pthread_t tid; // thread id
    stu_t stu = { "zhangsan", 20 };

    if (pthread_create(&tid, NULL, thread_func, (void*)&stu))
        perror("pthread_create error");

    pthread_join(tid, NULL); // 等待线程结束，回收线程资源，如果不阻塞主线程先退出，子线程还没执行完，子线程就会被强制退出

    return 0;
}