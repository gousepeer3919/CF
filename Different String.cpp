#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

    
        sort(s.begin(), s.end());

        bool possible = true;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == s[i + 1]) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << "YES" << endl;
            cout << s << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
