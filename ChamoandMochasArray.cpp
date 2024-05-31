#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        int maxt = 0;

        if(n==2){
            cout << *min_element(a.begin(), a.end()) << endl;
        }

        for(int i = 0; i < n-2; ++i){
            vector<int>c;
            for(int j =i;j<i+3;j++){
                c.push_back(a[j]);
            }
            sort(c.begin(), c.end());
            maxt = max(maxt,c[i]);
        }

        cout << maxt << endl;
    }
    return 0;
}
