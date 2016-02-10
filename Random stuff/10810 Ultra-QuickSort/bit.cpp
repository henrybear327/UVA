#include <stdio.h>
#include <string.h>
#include <map>
#include <algorithm>
using namespace std;

const int N = 500005;
int n, num[N], save[N], bit[N];
map<int, int> hash;

void add(int x, int v)
{
    while (x <= n) {
        bit[x] += v;
        x += (x & (-x));
    }
}

int get(int x)
{
    int ans = 0;
    while (x > 0) {
        ans += bit[x];
        x -= (x & (-x));
    }
    return ans;
}

void init()
{
    hash.clear();
    memset(bit, 0, sizeof(bit));
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
        save[i] = num[i];
    }
    sort(save + 1, save + n + 1);
    for (int j = 1; j <= n; j++)
        hash[save[j]] = j;
}

long long solve()
{
    long long ans = 0;

    for (int i = 1; i <= n; i++) {
        // show bit
        printf("before i = %d\n", i);
        for (int j = 1; j <= n; j++) {
            printf("%d ", get(j));
        }
        printf("\n\n");

        ans += get(n) - get(hash[num[i]]);
        add(hash[num[i]], 1);

        // show bit
        printf("after i = %d\n", i);
        for (int j = 1; j <= n; j++) {
            printf("%d ", get(j));
        }
        printf("\n\n");
    }

    return ans;
}

int main()
{
    while (~scanf("%d", &n) && n) {
        init();
        printf("%lld\n", solve());
    }
    return 0;
}
