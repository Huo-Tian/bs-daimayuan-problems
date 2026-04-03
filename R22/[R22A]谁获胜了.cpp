#include <bits/stdc++.h>
using namespace std;

int T;
string s;

int main() {
    cin >> T;
    for(; T --; ) {
        cin >> s;
        int A, B;
        A = B = 0;
        for(int i = 0; i < s.size(); i ++) {
            if(s[i] == 'A') A++;
            else B++;
            if(B - A == 2) {
                cout << "B" << endl;
                break;
            }else if(A - B == 2) {
                cout << "A" << endl;
                break;
            }
        }
    }
}