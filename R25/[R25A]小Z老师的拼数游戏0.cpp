#include <bits/stdc++.h>
using namespace std;

string a, b;

int main() {
    cin >> a >> b;
    reverse(b.begin(), b.end());
    bool flag = false;
    string bpie = b;
    if(b.size() - 1 > 0) {
        for(int i = 0; i < b.size(); i ++) {
            //cout << b[i];
            if(b[i] == '0' && flag == false) {
                bpie = b.substr(i + 1, b.size() - i - 1);
            }
            if (b[i] != '0') {
                flag = true;
            }
        }
    }
    cout << endl;
    string s = a + bpie;
    cout << s << endl;
}