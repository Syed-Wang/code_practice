#include <stdio.h>
#include <string.h>
#include <time.h>

#define PRINT_ERR(msg) \
    do {               \
        perror(msg);   \
        return -1;     \
    } while (0)

/* int main(int argc, const char* argv[])
{
    time_t ts, ots;
    struct tm* tm;
    ts = ots = 0;
    while (1) {
        // 1.获取秒钟数
        if ((ts = time(NULL)) == (time_t)-1)
            PRINT_ERR("get time error");

        if (ts != ots) {
            ots = ts;
            // 2.进行时间转换
            if ((tm = localtime(&ts)) == NULL)
                PRINT_ERR("change time error");

            printf("%d-%02d-%02d %02d:%02d:%02d\n", tm->tm_year + 1900,
                tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
        }
    }
    return 0;
} */

int GetFileLen(FILE* fp)
{
    int line = 0;
    char s[20] = { 0 };
    while (fgets(s, sizeof(s), fp)) {
        if (s[strlen(s) - 1] == '\n')
            line++;
    }
    return line;
}

int main(int argc, const char* argv[])
{
    time_t ts, ots;
    struct tm* tm;
    int line;
    FILE* fp;
    char tm_buf[128] = { 0 };
    // 1.打开文件
    if ((fp = fopen("./time.txt", "a+")) == NULL)
        PRINT_ERR("fopen error");
    // 2.获取文件中的行号
    line = GetFileLen(fp);
    // 3.循环向文件中写时间
    ts = ots = 0;
    while (1) {
        // 1.获取秒钟数
        if ((ts = time(NULL)) == (time_t)-1)
            PRINT_ERR("get time error");

        if (ts != ots) {
            ots = ts;
            // 2.进行时间转换
            if ((tm = localtime(&ts)) == NULL)
                PRINT_ERR("change time error");

            /* snprintf(tm_buf, sizeof(tm_buf), "%4d.%d-%02d-%02d %02d:%02d:%02d\n",
                line++, tm->tm_year + 1900, tm->tm_mon + 1,
                tm->tm_mday, tm->tm_hour, tm->tm_min,
                tm->tm_sec);

            fputs(tm_buf, fp);

            // fflush刷新缓冲区
            if (fflush(fp) == EOF)
                PRINT_ERR("fflush error"); */
            fprintf(fp, "%4d.%d-%02d-%02d %02d:%02d:%02d\n",
                line++, tm->tm_year + 1900, tm->tm_mon + 1,
                tm->tm_mday, tm->tm_hour, tm->tm_min,
                tm->tm_sec);
            
            // 3.刷新缓冲区，实时写入文件，否则会等到缓冲区满了才写入，或者程序退出时才写入
            if (fflush(fp) == EOF)
                PRINT_ERR("fflush error");
        }
    }

    fclose(fp);
    return 0;
}