#include  <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    scanf("%lld", &n);
    long long A = sqrt(n);
    while (A * A > n) {
        A--;
    }
    while ((A + 1) * (A + 1) <= n) {
        A++;
    }
    printf("%lld\n", A * A);
}