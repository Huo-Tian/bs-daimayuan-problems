#include <bits/stdc++.h>
using namespace std;

const int P = 998244353;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a = 0, b = 0;
    for (int i = 1; i <= n; i++) {
        a += gcd(i, n);
        a %= P;
    }
    for (int i = 1; i <= m; i++) {
        b += gcd(i, m);
        b %= P;
    }
    printf("%lld\n", (1LL * a * b) % P);
}