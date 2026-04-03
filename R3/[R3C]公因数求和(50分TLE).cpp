#include<bits/stdc++.h>
using namespace std;

long long c, ans = 0;

inline void gcd(long long a, long long b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    c = a == 0 ? 0 : a;
    for (long long i = 1; i <= c; i++) {
        if (c % i == 0) {
            ans += i;
        }
    }
}
int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    gcd(a, b);
    printf("%lld\n", ans);
}