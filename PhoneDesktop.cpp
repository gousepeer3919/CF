#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;

        int minscreens = (y + 1) / 2;
        int remaining = minscreens * 15 - (4*y);

        if (x <= remaining) {
            cout << minscreens << endl;
        } else {
            int extra = x - remaining;
            int newadded = (extra + 14) / 15;
            cout << minscreens + newadded << endl;
        }
    }
    
    return 0;
}
