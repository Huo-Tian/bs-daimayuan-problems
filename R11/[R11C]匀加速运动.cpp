#include <bits/stdc++.h>
using namespace std;

double v0, a, v1, t;

int main() {
    scanf("%lf%lf%lf%lf", &v0, &a, &v1, &t);
    double x = min(t, (v1 - v0) / a);
    printf("%.3lf", v0 * x + 0.5 * a * x * x + v1 * (t - x));
}