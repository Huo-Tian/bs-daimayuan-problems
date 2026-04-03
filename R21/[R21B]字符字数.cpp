#include <bits/stdc++.h>
using namespace std;

string s;
int d, m, y;

int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'd')
			d++;
		else if (s[i] == 'm')
			m++;
		else if (s[i] == 'y')
			y++;
	}
	printf("%d %d %d\n", d, m, y);
}