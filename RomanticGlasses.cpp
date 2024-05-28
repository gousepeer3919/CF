#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool findEqualSubarray(const vector<int>& v, int n) {
    vector<int> prefix_odd(n + 1, 0);
    vector<int> prefix_even(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        prefix_odd[i + 1] = prefix_odd[i];
        prefix_even[i + 1] = prefix_even[i];
        if (i % 2 == 0) {
            prefix_odd[i + 1] += v[i];
        } else {
            prefix_even[i + 1] += v[i];
        }
    }

    unordered_map<int, int> balance_map;
    balance_map[0] = -1;

    for (int i = 0; i < n; ++i) {
        int balance = prefix_odd[i + 1] - prefix_even[i + 1];
        if (balance_map.find(balance) != balance_map.end()) {
            int prev_index = balance_map[balance];
            if (prev_index < i) {
                return true;
            }
        } else {
            balance_map[balance] = i;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        if (findEqualSubarray(v, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
