#include <bits/stdc++.h>
using namespace std;

int T, n, m;
string s;

inline void solve() {
    cin >> n >> m;
    cin >> s;
    for(int i = 0; i < n; i ++) {
        if(!(s[i] >= '0' && s[i] <= '9')) {
            cout << "No\n";
            return;
        }
    }
    if(s[n] != '+') {
        cout << "No\n";
        return;
    }
    for(int i = n + 1; i < 1 + n + m; i ++) {
        if(!(s[i] >= '0' && s[i] <= '9')) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    cin >> T;
    for( ; T--; ) {
        solve();
    }
}