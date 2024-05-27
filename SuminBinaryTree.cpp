#include <iostream>
#include <vector>

using namespace std;

vector<long long> findPathSums(const vector<long long>& nodes) {
    vector<long long> results;
    
    for (long long n : nodes) {
        long long sum = 0;
        while (n > 0) {
            sum += n;
            n /= 2;
        }
        results.push_back(sum);
    }
    
    return results;
}

int main() {
    int t;
    cin >> t;
    vector<long long> nodes(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> nodes[i];
    }
    
    vector<long long> results = findPathSums(nodes);
    
    for (long long result : results) {
        cout << result << endl;
    }
    
    return 0;
}
