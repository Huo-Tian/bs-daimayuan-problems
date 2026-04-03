#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    scanf("%lld%lld", &n, &x);
    long long a[1000001], ans = 0;
    for(int i = 1; i <= n; i ++){
        scanf("%lld", &a[i]);
        if(a[i] == x){
            ans ++;
        }
    }
    printf("%lld\n", ans);
}