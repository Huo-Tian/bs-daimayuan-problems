
#include<bits/stdc++.h>
using namespace std;

int x, y;
string s;

int main(){
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'U')
            y++;
        else if(s[i] == 'D')
            y--;
        else if(s[i] == 'L')
            x--;
        else 
            x++;
    }
    cout << x << " " << y << endl;
}