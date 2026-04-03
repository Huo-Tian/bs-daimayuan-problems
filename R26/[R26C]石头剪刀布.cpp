#include <bits/stdc++.h>
using namespace std;

long long n, m, y, z;
long long ma = 0;
int a[10001], b[10001];

int main() {
    cin >> n >> m >> y >> z;
    for(int i = 1; i <= m; i ++) {
        cin >> a[i];
    }
    long long ans = -9999999999999;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> b[j];
            if((b[j] == 1 && a[j] == 0) || (b[j] == 2 && a[j] == 1) || (b[j] == 0 && a[j] == 2)) {
                ma = ma + y;
            } else if((b[j] == 1 && a[j] == 1) || (b[j] == 2 && a[j] == 2) || (b[j] == 0 && a[j] == 0)) {
                ma = ma;
            } else {
                ma = ma - z;
            }
        }
        ans = max(ma, ans);
        ma = 0;
    }
    cout << ans << endl;

}