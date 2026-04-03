#include <bits/stdc++.h>
using namespace std;

int n, m, t;
char s[101][101];

int main() {
    cin >> n >> m;
    memset(s, '.', sizeof(s));
    cin >> t;
    for(int i = 1; i <= t; i ++) {
        char opt;
        int k;
        scanf("\n%c %d", &opt, &k);
        if(opt == 'R') {
            for(int i = 1; i <= m; i ++) {
                s[k][i] = 'R';
            }
        } else if(opt == 'C') {
            for(int i = 1; i <= n; i ++) {
                s[i][k] = 'R';
            }
        }
    }
    cin >> t;
    for(int i = 1; i <= t; i ++) {
        char opt;
        int k;
        scanf("\n%c %d", &opt, &k);
        if(opt == 'R') {
            for(int i = 1; i <= m; i ++) {
                s[k][i] = 'G';
            }
        } else if(opt == 'C') {
            for(int i = 1; i <= n; i ++) {
                s[i][k] = 'G';
            }
        }
    }cin >> t;
    for(int i = 1; i <= t; i ++) {
        char opt;
        int k;
        scanf("\n%c %d", &opt, &k);
        if(opt == 'R') {
            for(int i = 1; i <= m; i ++) {
                s[k][i] = 'B';
            }
        } else if(opt == 'C') {
            for(int i = 1; i <= n; i ++) {
                s[i][k] = 'B';
            }
        }
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++)
            cout << s[i][j];
        cout << endl;
    }
}