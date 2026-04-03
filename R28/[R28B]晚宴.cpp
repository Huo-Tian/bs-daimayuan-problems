#include <bits/stdc++.h>
using namespace std;

int n, a[100010], b[100010], c[100010];

int main() {
    cin >> n;
    for(int i = 0; i <= n - 1; i ++) {
        cin >> a[i];
    }
    for(int i = 0; i <= n - 1; i ++) {
        cin >> b[i];
    }
    int ans = 0;
    for(int i = 0; i <= n; i ++) {
        for(int j = 0; j <= n - 1; j ++) {
            c[(j + i) % n] = b[j];
        }
        int sum = 0;
        for(int j = 0; j <= n - 1; j ++) {
            if(c[j] == a[j]) {
                sum++;
            }
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}