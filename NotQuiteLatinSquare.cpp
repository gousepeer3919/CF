#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast_io
    
    int t;
    cin >> t;
    
    while(t--) {
        vector<string> grid(3);
        for(int i = 0; i < 3; ++i) {
            cin >> grid[i];
        }
        
        int row = -1, col = -1;
        char missing_letter;
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 3; ++j) {
                if(grid[i][j] == '?') {
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        set<char> row_letters = {'A', 'B', 'C'};
        for(int j = 0; j < 3; ++j) {
            if(grid[row][j] != '?') {
                row_letters.erase(grid[row][j]);
            }
        }
        set<char> col_letters = {'A', 'B', 'C'};
        for(int i = 0; i < 3; ++i) {
            if(grid[i][col] != '?') {
                col_letters.erase(grid[i][col]);
            }
        }
        for(char ch : row_letters) {
            if(col_letters.find(ch) != col_letters.end()) {
                missing_letter = ch;
                break;
            }
        }
        
        cout << missing_letter << '\n';
    }
    
    return 0;
}
