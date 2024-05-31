#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

bool isValidSubstring(const string &s, int l, int r) {
    int balance = 0;
    for (int i = l; i <= r; ++i) {
        if (s[i] == '(') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

bool isValidAfterInversion(const string &s, int l, int r) {
    string inverted = s.substr(0, l) + s.substr(l, r - l + 1) + s.substr(r + 1);
    for (int i = l; i <= r; ++i) {
        if (inverted[i] == '(') inverted[i] = ')';
        else inverted[i] = '(';
    }
    return isValidSubstring(inverted, 0, inverted.size() - 1);
}

int countValidInversions(const string &s) {
    int n = s.size();
    int count = 0;
    for (int l = 0; l < n; ++l) {
        for (int r = l; r < n; ++r) {
            if (isValidAfterInversion(s, l, r)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << countValidInversions(s) << endl;
    }
    return 0;
}
