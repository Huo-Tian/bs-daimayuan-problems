#include <bits/stdc++.h>
using namespace std;

int n, r, ma = -3305500;
int c[5001];

int main() {
    cin >> n >> r;
    if(r > ma)
        ma = r;
    for(int i = 1; i <= n; i ++) {
        cin >> c[i];
        if(r + c[i] > ma) 
            ma = r + c[i];
        r += c[i];
    }
    cout << ma << endl;
}