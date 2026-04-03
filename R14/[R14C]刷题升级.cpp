#include <bits/stdc++.h>
using namespace std;

long long n;
int k;

int main() {
    scanf("%lld", &n);
    scanf("%d", &k);
    int t = sqrt(2 * n / k);
    while (1LL * k * t * (t - 1) / 2 > n) {
        t--;
    }
    while (1LL * k * (t + 1) * t / 2 <= n) {
        t++;
    }
    printf("%d %lld\n", t, (n - 1LL * k * t * (t - 1) /2) * t);
}