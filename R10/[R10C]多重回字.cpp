#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            int d = min({i, j, n - i + 1, n - j + 1});  
            if (d % 2 == 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}