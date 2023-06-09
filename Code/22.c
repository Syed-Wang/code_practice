#include <stdio.h>

// 问题描述：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
// 已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，
// c说他不和x,z比，请编程序找出三队赛手的名单。
// 程序分析：根据a的话，a不和x比，那么a只能和y或者z比，同理c只能和y比，那么b只能和x比。
int main(int argc, const char* argv[])
{
    char i, j, k; // i是a的对手，j是b的对手，k是c的对手
    for (i = 'x'; i <= 'z'; i++) { // a的对手
        for (j = 'x'; j <= 'z'; j++) { // b的对手
            if (i != j) { // a的对手和b的对手不能相同
                for (k = 'x'; k <= 'z'; k++) { // c的对手
                    if (i != k && j != k) { // a的对手和c的对手不能相同，b的对手和c的对手不能相同
                        if (i != 'x' && k != 'x' && k != 'z') { // a不和x比，c不和x,z比
                            printf("a--%c\tb--%c\tc--%c\n", i, j, k);
                        }
                    }
                }
            }
        }
    }

    return 0;
}