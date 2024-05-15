#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int minimum = min(x, y);
        int maximum = max(x, y);

        cout << minimum << " " << maximum << endl;
    }

    return 0;
}
