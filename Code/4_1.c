#include <stdio.h>
/**
 * @brief 计算某年某月某日是这一年的第几天
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, const char* argv[])
{
    int year, month, day, sum = 0;

    printf("请输入年月日\n");
    scanf("%d%d%d", &year, &month, &day);

    for (int i = 1; i < month; i++) {
        if (2 == i) {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                sum += 29;
            } else {
                sum += 28;
            }
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            sum += 30;
        } else {
            sum += 31;
        }
    }
    sum += day;

    printf("这一天是这一年的第%d天\n", sum);

    return 0;
}
