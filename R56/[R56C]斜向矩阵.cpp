#include <bits/stdc++.h>
using namespace std;

int n;
int a[1010][1010];

int main() {
    cin >> n;
    int cnt = 1, sum = 1;
    int startx = 1, starty = 1;
    for(int i = 1; i <= n; i ++) {
        for(int j = startx, k = starty; j <= sum && k >= 1; j ++, k --) {
            //cout << j << " " << k << endl;
            a[j][k] = cnt;
            cnt++;
        }
        sum ++;
        starty ++;
    }
    //cout << sum << endl;
    sum = 1 + n - (n - 1);
    startx = 2, starty = n;
    for(int i = 1; i < n; i ++) {
        //cout << startx << " " << starty << endl; 
        for(int j = startx, k = starty; j <= n && k >= sum; j ++, k --) {
            //cout << j << " " << k << endl;
            a[j][k] = cnt;
            cnt++;
        }
        sum ++;
        startx ++;
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= n; j ++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
/*



*/