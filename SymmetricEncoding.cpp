#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string b;
        cin >> n >> b;
        
        set<char> distinct_chars(b.begin(), b.end());
        vector<char> r(distinct_chars.begin(), distinct_chars.end());
        
        map<char, char> encoding_map;
        int r_len = r.size();
        for (int i = 0; i < r_len; ++i) {
            encoding_map[r[i]] = r[r_len - 1 - i];
        }
        
        string s;
        for (char c : b) {
            s += encoding_map[c];
        }
        
        cout << s << endl;
    }
    
    return 0;
}
