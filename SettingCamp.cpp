#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans;
        int introvertsrooms = a;
        if((b+c)%3 > c){
            cout << "-1" << endl;
        }
        else{
            ans = introvertsrooms + (b+c)/3 + (((b+c)%3)+2)/3;
            cout << ans << endl;
        }
    }

    return 0;
}