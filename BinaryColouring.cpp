#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long x;
    cin >> x;

    vector<int> result;
    while (x != 0) {
        if (x % 2 != 0) {
            if (x % 4 == 1) {
                result.push_back(1);
                x -= 1;
            } else {
                result.push_back(-1);
                x += 1;
            }
        } else {
            result.push_back(0);
        }
        x /= 2;
    }

    int n = result.size();
    cout << n << endl;
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
