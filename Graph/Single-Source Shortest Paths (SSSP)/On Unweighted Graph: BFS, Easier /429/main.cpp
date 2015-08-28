#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

int main()
{
    int cases;
    scanf("%d", &cases);
    getchar();
    getchar();
    while (cases--) {
        char dictionary[210][50];

        int index = 0;
        while (fgets(dictionary[index], 50, stdin) != NULL &&
               dictionary[index++][0] != '*')
            ;
        index--;

        char query[1000];
        while (fgets(query, 1000, stdin) != NULL && query[0] != '\n') {
            char *s, *e;
            s = strtok(query, " \n");
            e = strtok(NULL, " \n");

            queue<char *> bfs;
            bfs.push(s);

            int curr_size = 1;
            while (bfs.size() != 0) {
                char *now = bfs.front();
                bfs.pop();

                if (--curr_size == 0)
                    curr_size = bfs.size();

                int len = strlen(now) - 1;
                for (int i = 0; i < len; i++) {
                    for (int j = 0; j < index; j++) {
                        if ((int)strlen(dictionary[j]) - 1 != len)
                            break;

                        bool flag = true;
                        for (int k = 0; k < len; k++) {
                            if (dictionary[j][i] != now[i] && dictionary[j][k] == now[k])
                                continue;
                            else {
                                flag = false;
                                break;
                            }
                        }

                        if (flag)
                            bfs.push(dictionary[j]);
                    }
                }
            }
        }
    }

    return 0;
}
