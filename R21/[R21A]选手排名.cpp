#include <bits/stdc++.h>
using namespace std;

struct Node {
    string name;
    int x, y;
}a, b;
string ans;

int main() {
    cin >> a.name >> a.x >> a.y;
    scanf("\n");
    cin >> b.name >> b.x >> b.y;
    scanf("\n");
    if (a.x < b.x)
        ans = b.name;
    else if (a.x > b.x)
        ans = a.name;
    else
        if (a.y < b.y)
            ans = a.name;
        else
            ans = b.name;
    cout << ans;
}