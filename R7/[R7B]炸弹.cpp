#include <bits/stdc++.h>

using namespace std;

const int e = 1000;

int n, m;
char s[e + 10][e + 10];

int main() {
    scanf("%d%d\n", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%s", s[i] + 1);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int res = 0;
            for (int x = max(1, i - 3); x <= min(n, i + 3); x++) {
                for (int y = max(1, j - 3); y <= min(m, j + 3); y++) {
                    if (abs(i - x) + abs(j - y) <= 3) {
                        if (s[x][y] == '@') {
                            res++;
                        }
                    }
                }
            }
            printf("%d ", res);
        }
        printf("\n");
    }
    return 0;
}