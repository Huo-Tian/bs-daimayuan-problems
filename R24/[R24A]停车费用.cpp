#include <bits/stdc++.h>
using namespace std;

int A, B, T, a1, a2, a3;

int main() {
    cin >> A >> B >> T >> a1 >> a2 >> a3;
    if (T <= A) {
        cout << a1 << endl;
    } else if (T > A && T <= B) {
        cout << a1 + (T - A) * a2 << endl;
    } else if (T > B) {
        cout << a1 + (B - A) * a2 + (T - B) * a3 << endl;
    }
}