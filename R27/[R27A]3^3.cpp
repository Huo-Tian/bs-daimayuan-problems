#include <bits/stdc++.h>
using namespace std;

char s[10001];

int main() {
    scanf("%s", s + 1);
    for(int i = 1; i <= strlen(s + 1) - 1; i ++) {
        cout << s[i] << "^";
    }
    cout << s[strlen(s + 1)];
}