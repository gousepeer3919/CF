#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int test;
    cin>>test;
 
    while(test--){
        int n;
        cin>>n;
 
        string a="";
        string b="";
 
        for(int i=1; i<=n; i++){
            a += (i%2) ? "##" : "..";
            b += (i%2) ? ".." : "##";
        }
 
        for(int i=1; i<=n; i++){
            if(i%2)
                cout<<a<<"\n"<<a<<"\n";
            else
                cout<<b<<"\n"<<b<<"\n";
        }
    }
}
 