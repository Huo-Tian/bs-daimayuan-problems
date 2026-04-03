#include <bits/stdc++.h>
using namespace std;

char a[17], b[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
char s[10001];

int main() {
    for(int i = 0; i < 16; i ++) {
        scanf("%c ", &a[i]);
    }
    scanf("\n%s", s + 1);
    for(int i = 1; i <= strlen(s + 1); i ++) {
        for(int j = 0; j < 16; j ++) {
            if(s[i] == b[j]){
                s[i] = a[j];
                break;
            }
        }
    }
    printf("%s", s + 1);
}