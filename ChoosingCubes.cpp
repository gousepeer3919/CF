#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int favorite_value = a[f - 1];
    sort(a.begin(), a.end(), greater<int>());

    vector<int> indexes;
    for(int j = 0; j < n; j++) {
        if(a[j] == favorite_value) {
            indexes.push_back(j + 1);
        }
    }

    bool is_removed = false;
    bool is_maybe = false;
    for (int index : indexes) {
        if (index <= k) {
            is_maybe = true;
        } else {
            is_removed = true;
        }
    }

    if (is_maybe && is_removed) {
        cout << "MAYBE" << endl;
    } else if (is_maybe) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
