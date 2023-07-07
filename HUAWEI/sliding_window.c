/**
 * @file sliding_window.c
 * @author sy wang (wangsy8421@gmail.com)
 * @brief 滑动窗口
 * @note 有一个N个整数的数组，和一个长度为M的窗口，窗口从数组内的第一个数开始滑动直到窗口不能滑动为止,每次窗口滑动产生一个窗口和(窗口内所有数的和)，求窗口滑动产生的所有窗口和的最大值。
 * @version 0.1
 * @date 2023-07-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

int main(int argc, const char* argv[])
{
    int n, m; // n个整数，窗口长度为m
    scanf("%d", &n); // 第一行输入一个正整数N,表示整数个数。(0<N< 100000)
    int arr[n]; // 申请n个整数的数组
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i); // 第二行输入N个整数，整数的取值范围为[-100,100]。
    }
    scanf("%d", &m); // 第三行输入一个正整数M，表示窗口大小。(0<M<=N)

    int max = 0; // 最大值
    int sum = 0; // 窗口和
    int i, j;
    for (i = 0; i < m; i++) { // 初始化窗口
        sum += arr[i];
    }
    max = sum;
    for (j = i; j < n; j++) { // 窗口滑动
        sum += arr[j] - arr[j - m];
        if (sum > max) {
            max = sum;
        }
    }
    printf("%d\n", max);

    return 0;
}