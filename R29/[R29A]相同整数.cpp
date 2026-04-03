#include <bits/stdc++.h>
using namespace std;

int T, a, b, c;

int main() {
    cin >> T;
    for (; T--; ) {
        cin >> a >> b >> c;
        bool say = false;
        if (a == b) {
            say = true;
            cout << "a-b\n";
        }
        if (a == c) {
            say = true;
            cout << "a-c\n";
        }
        if (b == c) {
            say = true;
            cout << "b-c\n";
        }
        if (say != true) {
            cout << "No\n";
        }
    }
}