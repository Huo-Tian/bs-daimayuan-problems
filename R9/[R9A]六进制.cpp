#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	scanf("%lld", &n);
	int a[1001], t;
	while(n > 0){
		t ++;
		a[t] = n % 6;
		n /= 6;
	}
	for(int i = t; i >= 1; i --){
		printf("%d", a[i]);
	}
}