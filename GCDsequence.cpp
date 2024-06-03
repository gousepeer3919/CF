#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

bool isNonDecreasing(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        b[i] = gcd(a[i], a[i + 1]);
    }

    if (isNonDecreasing(b)) {
        cout << "YES" << endl;
        return;
    }

    vector<int> prefixGCD(n, 0), suffixGCD(n, 0);
    prefixGCD[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefixGCD[i] = gcd(prefixGCD[i - 1], a[i]);
    }

    suffixGCD[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suffixGCD[i] = gcd(suffixGCD[i + 1], a[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            vector<int> tempB(n - 2);
            for (int j = 1; j < n - 1; ++j) {
                tempB[j - 1] = gcd(a[j], a[j + 1]);
            }
            if (isNonDecreasing(tempB)) {
                cout << "YES" << endl;
                return;
            }
        } else if (i == n - 1) {
            vector<int> tempB(n - 2);
            for (int j = 0; j < n - 2; ++j) {
                tempB[j] = gcd(a[j], a[j + 1]);
            }
            if (isNonDecreasing(tempB)) {
                cout << "YES" << endl;
                return;
            }
        } else {
            vector<int> tempB(n - 2);
            for (int j = 0; j < i - 1; ++j) {
                tempB[j] = gcd(a[j], a[j + 1]);
            }
            tempB[i - 1] = gcd(a[i - 1], a[i + 1]);
            for (int j = i; j < n - 2; ++j) {
                tempB[j] = gcd(a[j + 1], a[j + 2]);
            }
            if (isNonDecreasing(tempB)) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
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
