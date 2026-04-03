#include<bits/stdc++.h>
using namespace std;

int n, a[1000001], ans;

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		scanf("%d", &a[i]);
	}
	ans = 0;
	for(int i = 1; i <= n; i ++){
		for(int j = i + 1; j <= n; j ++){
			for(int k = j + 1; k <= n; k ++){
				int mi = min(a[i], a[k]), ab = abs(a[i] - a[k]);
				if(i < j && j < k && mi <= ab){
					//cout << i << " " << j << " " << k << " " << mi << " " << ab << endl;
					ans++;
				}
			}
		}
	}
	printf("%d\n", ans);
}