#include<bits/stdc++.h>
using namespace std;
const int P = 998244353;
int gcd(int a, int b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}
int n, ans;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            ans += gcd(gcd(i, n), gcd(j, n)) % P;
        }
    }
    printf("%d\n", ans);
}