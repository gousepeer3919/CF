#include <iostream>
#include <cmath>

using namespace std;

int countLatticePoints(int r) {
    int count = 0;
    
    for (int x = -r - 1; x <= r + 1; ++x) {
        int y_range = (int)sqrt((r + 1) * (r + 1) - x * x);
        count += max(0, min(r, y_range) - max(-r, -y_range) + 1);
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int r;
        cin >> r;
        
        cout << countLatticePoints(r) << endl;
    }

    return 0;
}
