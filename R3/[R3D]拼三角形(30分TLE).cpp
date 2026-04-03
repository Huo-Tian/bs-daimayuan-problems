#include <bits/stdc++.h>
using namespace std;

int n;
int len[100010];

bool bian(int x, int y, int z) {
    return (x + z > y && x + y > z && y + z > x);
}

int helen(int x, int y, int z) {
    int s = (x + y + z) / 2;
    return sqrt(s * (s - x) * (s - y) * (s - z));
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> len[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i ++) {
        for(int j = i + 1; j <= n; j ++) {
            for(int k = j + 1; k <= n; k ++) {
                if(i != j && i != k && j != k && bian(len[i], len[j], len[k]) && helen(len[i], len[j], len[k] >= 1)) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
} 