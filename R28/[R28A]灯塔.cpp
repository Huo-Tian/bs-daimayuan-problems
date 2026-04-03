#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,T;
    cin >> T;
    for(; T--;){
    cin >> a >> b >> c >> d;
    if((a*c)+(b*d) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
    }
}