#include <bits/stdc++.h>
using namespace std;

int n, k, a[100010], b[100010], ans = 0;

int main() {
    int ma = INT_MIN;
    cin >> n >> k;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        ma = max(ma, a[i]);
        b[a[i]]++;
    }
    for(int i = 1; i <= ma; i ++) {
        if(b[i] > k) {
            ans += b[i] - k;
        }
    }
    cout << ans << endl;
}