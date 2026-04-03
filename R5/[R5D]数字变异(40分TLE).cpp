#include <bits/stdc++.h>
using namespace std;

string n;
long long m, k;

int main() {
    cin >> n;
    cin >> m >> k;
    int ans = 0, ab = 0;
    int nsize = n.size();
    for(int i = 0; i < nsize; i ++) {
        ans += (n[i] - '0');
    }
    ans += m, k --;
    for(; k --; ) {
        ab = ans / 1000000 % 10 + ans / 100000 % 10 + ans / 10000 % 10 + ans / 1000 % 10 + ans / 100 % 10 + ans / 10 % 10 + ans % 10;
        ans = ab + m;
    }
    cout << ans << endl;
}