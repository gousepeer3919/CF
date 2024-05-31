#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateTriplets(const vector<int>& arr) {
    vector<vector<int>> triplets;
    int n = arr.size();
    for (int i = 0; i < n - 2; ++i) {
        triplets.push_back({arr[i], arr[i+1], arr[i+2]});
    }
    return triplets;
}

int countBeautifulPairs(const vector<vector<int>>& triplets) {
    int count = 0;
    int n = triplets.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diffCount = 0;
            if (triplets[i][0] != triplets[j][0]) ++diffCount;
            if (triplets[i][1] != triplets[j][1]) ++diffCount;
            if (triplets[i][2] != triplets[j][2]) ++diffCount;
            if (diffCount == 1) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<vector<int>> triplets = generateTriplets(arr);
        int beautifulPairsCount = countBeautifulPairs(triplets);

        cout << beautifulPairsCount << endl;
    }

    return 0;
}
