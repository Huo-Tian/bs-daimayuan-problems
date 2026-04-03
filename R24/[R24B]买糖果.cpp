#include <bits/stdc++.h>
using namespace std;

int a, b, x;

int main() {
    cin >> a >> b >> x;
    long long ans = 1;
    if(x < b) {
        ans += x / a;
    } else {
        for(int i = 0; i <= x / b; i ++) {
            ans += (x - i * b) / a;
        }
        ans += 1 * (x / b);
    }
    cout << ans << endl;
}