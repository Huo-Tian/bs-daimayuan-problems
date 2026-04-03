#include <bits/stdc++.h>
using namespace std;

int n, q, x, choos = 0;
char s[1001], c;

inline void Myself_swap(int x) {
    char tmp = s[x];
    for (int i = x - 1; i >= 1; i --)
        s[i + 1] = s[i];
    s[1] = tmp;
    return;
}

int main() {
    scanf("%d\n", &n);
    scanf("%s\n", s + 1);
    scanf("%d", &q);
    for (int i = 1; i <= q; i++) {
        choos = 0;
        scanf("%d %c\n", &x, &c);
        for (int j = 1; j <= strlen(s + 1); j ++) {
            if (s[j] == c) {
                choos ++;
            }
            if (choos == x) {
                Myself_swap(j);
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%c", s[i]);
}