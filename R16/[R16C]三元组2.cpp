#include <bits/stdc++.h>
using namespace std;

int n, a[100010];
long long ans;

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		scanf("%d", &a[i]);
	}
	ans = 0;
	for(int i = 1; i <= n; i ++){
		for(int k = i + 1; k <= n; k ++){
			if(max(a[i], a[k]) >= 2 * min(a[i], a[k])) {
				ans += k - i - 1;
			}
		}
	}
	printf("%lld\n", ans);
}