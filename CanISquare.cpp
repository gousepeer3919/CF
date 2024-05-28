#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is a perfect square
bool isPerfectSquare(int64_t num) {
    int64_t root = sqrt(num);
    return root * root == num;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int64_t total_squares = 0; // Use int64_t to handle large sums
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            total_squares += v[i];
        }

        if (isPerfectSquare(total_squares)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
