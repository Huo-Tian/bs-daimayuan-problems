#include <bits/stdc++.h>
using namespace std;

int T, n, m, a[1000010];

int main() {
    cin >> T;
    for(; T--; ) {
        cin >> n >> m;
        for(int i = 1; i <= m; i ++) {
            cin >> a[i];
        }

        bool flag = true;
        sort(a + 1, a + m + 1);
        for(int i = 1; i <= m; i ++) {
            if(a[i] == n || (a[i] == a[i + 1] - 1)) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
}