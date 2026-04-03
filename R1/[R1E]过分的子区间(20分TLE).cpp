#include <bits/stdc++.h>
using namespace std;

int n, k, x;
int a[200010], ans = 0;
int b[200010];

int main() {
    cin >> n >> k >> x;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int l = 1; l <= n; l ++) {
        for(int r = l; r <= n; r ++) {
            int cnt = 0;
            for(int i = l; i <= r; i ++) {
                b[++cnt] = a[i];
            }
            sort(b + 1, b + cnt + 1);
            if(b[k] >= x || (r - l + 1) < k) {
                ans ++;
            }
        }
    }
    cout << ans << endl;
}