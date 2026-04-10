#include <bits/stdc++.h>
using namespace std;

long long n, x;

int main() {
    cin >> n >> x;
    cout << (n / 4) * x * 3 + (n % 4) * x;
}