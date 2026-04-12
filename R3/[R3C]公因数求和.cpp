#include<bits/stdc++.h>
using namespace std;

long long c, ans = 0;

long long gcd(long long a, long long b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    c = gcd(a, b);
    //cout << c << endl;
    for (long long i = 1; i <= sqrt(c); i++) {
        if (c % i == 0) {
            ans += i;
            if(c / i != i) {
                ans += c / i;
            }
            //cout << i << " " << c / i << endl;
        }
    }
    printf("%lld\n", ans);
}