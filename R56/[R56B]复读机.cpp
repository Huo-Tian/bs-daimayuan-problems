#include <bits/stdc++.h>
using namespace std;

string s;
int k, n;

int main() {
    cin >> n >> k;
    cin >> s;
    for(int i = 0; i < n; i ++) {
        for(int j = 1; j <= k; j ++) {
            cout << s[i];
        }
    }
}