#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
string s, chrang;

int main() {
    cin >> n;
    cin >> s;
    for(ll i = 0; i < n - 1; i ++) {
        chrang += s[i];
    }
    s += chrang;
    ll ans = 0;
    for(ll i = 0; i <= n - 1; i ++) {
        string sum = "";
        for(ll j = i; j <= i + (n - 1); j ++) {
            //cout << j << " ";
            sum += s[j];
        }
        ll sumsize = sum.size(), base = 1, takeans = 0;
        for(ll j = sumsize - 1; j >= 0; j --) {
            takeans += (sum[j] - '0') * base;
            base *= 2;
        }
        ans += takeans;
    }
    cout << ans << endl;
} 