#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canBeSortedBySwapping(vector<int> &a) {
    int n = a.size();
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    for (int i = 0; i < n; ++i) {
        rotate(a.begin(), a.begin() + 1, a.end());
        if (a == sorted_a) {
            return true;
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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canBeSortedBySwapping(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
