#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast_io
    
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == b) {
            cout << c << '\n';
        } else if(b == c) {
            cout << a << '\n';
        } else {
            cout << b << '\n';
        }
    }

    return 0;
}
