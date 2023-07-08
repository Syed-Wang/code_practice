#include <stdio.h>

typedef struct {
    int id;
    int total_score;
    int high_scores[11]; // 0 ~ 10
} player_t;

void sort(player_t* players, int n)
{
    int i, j, k;
    player_t tmp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (players[j].total_score < players[j + 1].total_score) {
                tmp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = tmp;
            } else if (players[j].total_score == players[j + 1].total_score) {
                k = 10;
                while (players[j].high_scores[k] == players[j + 1].high_scores[k] && k > 0) {
                    k--;
                }
                if (players[j].high_scores[k] < players[j + 1].high_scores[k]) {
                    tmp = players[j];
                    players[j] = players[j + 1];
                    players[j + 1] = tmp;
                }
            }
        }
    }
}

int main()
{
    int M, N; // M 评委，N 选手
    scanf("%d,%d", &M, &N);

    player_t players[N];

    int i, j;
    for (i = 0; i < N; i++) { // 初始化
        players[i].id = i + 1;
        players[i].total_score = 0;
        for (j = 0; j <= 10; j++) {
            players[i].high_scores[j] = 0;
        }
    }
    int score;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &score);
            players[j].total_score += score;
            players[j].high_scores[score]++;
        }
    }
    sort(players, N);

    for (i = 0; i < 3; i++) {
        printf("%d", players[i].id);
        if (i != 2)
            printf(",");
    }

    return 0;
}