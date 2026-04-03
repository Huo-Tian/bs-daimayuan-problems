#include<bits/stdc++.h>
using namespace std;
int main(){
	int L, R, K, ans = 0;
	scanf("%d%d%d", &L, &R, &K);
	for(int i = L; i <= R; i ++){
		if(i % K == 0){
			ans ++;
		}
	}
	printf("%d\n", ans);
}