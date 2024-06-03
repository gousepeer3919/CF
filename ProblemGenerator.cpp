#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    
    int count[7] = {0};
    
    for (char c : a) {
        count[c - 'A']++;
    }
    
    int additional_problems_needed = 0;
    
    for (int i = 0; i < 7; ++i) {
        if (count[i] < m) {
            additional_problems_needed += (m - count[i]);
        }
    }
    
    cout << additional_problems_needed << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
