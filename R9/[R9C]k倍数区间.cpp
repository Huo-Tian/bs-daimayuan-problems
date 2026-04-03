#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int n, k, a[N + 1];
int s[N + 1], c[N + 1];

int main() {
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= n; i ++)  {
        scanf("%d", &a[i]);
        s[i] = (s[i - 1] + a[i]) % k;
    }
    long long ans = 0;
    for(int i = 0; i <= n; i ++) {
        ans += c[s[i]];
        c[s[i]]++;
    }
    printf("%lld\n", ans);
}