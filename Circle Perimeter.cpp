#include <iostream>
#include <cmath>

using namespace std;

int countLatticePoints(int r) {
    int count = 0;
    
   
    for (int x = -r; x <= r; ++x) {
        for (int y = -r; y <= r; ++y) {    
            double distance = sqrt(x * x + y * y);
            if (distance >= r && distance < r + 1) {
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
        int r;
        cin >> r;
        cout << countLatticePoints(r) << endl;
    }

    return 0;
}
