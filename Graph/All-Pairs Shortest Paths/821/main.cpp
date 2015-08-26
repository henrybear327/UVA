#include <cstdio>
#include <cstdlib>
#include <cstring>

int graph[101][101];

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define INT_MAX 1000000
int main()
{
    char input[10000];
    int index = 1;
    while (fgets(input, 10000, stdin) != NULL) {
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                if (i == j)
                    graph[i][j] = 0;
                else
                    graph[i][j] = INT_MAX;
            }
        }

        char *tok1 = strtok(input, " \n"), *tok2 = strtok(NULL, " \n");

        int max = 0;
        if (atoi(tok1) == 0 && atoi(tok2) == 0)
            break;

        while (1) {
            int a = atoi(tok1), b = atoi(tok2);
            // printf("%d %d\n", a, b);
            if (a == 0 && b == 0) {
                break;
            }

            max = MAX(MAX(a, b), max);

            graph[a][b] = 1;
            tok1 = strtok(NULL, " \n");
            tok2 = strtok(NULL, " \n");
        }

        max++;

        for (int i = 1; i < max; i++) {
            for (int j = 1; j < max; j++) {
                printf("%9d ", graph[i][j]);
            }
            printf("\n");
        }

        printf("\n\n\n");

        for (int i = 1; i < max; i++) {
            for (int j = 1; j < max; j++) {
                for (int k = 1; k < max; k++) {
                    if (graph[j][k] > graph[j][i] + graph[i][k]) {
                        printf("(%d,%d, %d), %d %d %d\n", i, j, k, graph[i][j], graph[j][i],
                               graph[i][k]);
                        graph[j][k] = graph[j][i] + graph[i][k];
                    }
                }
            }
        }

        double ans = 0.0;
        int count = 0;
        for (int i = 1; i < max; i++) {
            for (int j = 1; j < max; j++) {
                if (graph[i][j] != INT_MAX) {
                    ans += (double)graph[i][j];
                    count++;
                }
            }
        }

        printf("Case %d: average length between pages = %.3f clicks\n", index++,
               ans / count);

        for (int i = 1; i < max; i++) {
            for (int j = 1; j < max; j++) {
                printf("%9d ", graph[i][j]);
            }
            printf("\n");
        }

        printf("\n\n\n");
    }

    return 0;
}
