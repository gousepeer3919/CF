#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        vector<int> b; 
        for(int i = 0; i < n; i++) {
            if(a[i] % a[0] != 0) {
                b.push_back(a[i]);
            }
        }

        if(b.size() == 0) {
            cout << "YES" << endl;
        } else {
            bool divisible = true;
            for(int i = 0; i < b.size(); i++) {
                if(b[i] % b[0] != 0) {
                    divisible = false;
                    break;
                }
            }
            if(divisible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

