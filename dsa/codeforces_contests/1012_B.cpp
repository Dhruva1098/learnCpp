#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }
        bool possible = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '0') {
                    // Check for ones in all four directions
                    bool has_one_left = false;
                    bool has_one_above = false;
                    
                    // Check to the left
                    for (int k = j - 1; k >= 0; k--) {
                        if (grid[i][k] == '1') {
                            has_one_left = true;
                            break;
                        }
                    }
                    
                    
                    
                    // Check above
                    for (int k = i - 1; k >= 0; k--) {
                        if (grid[k][j] == '1') {
                            has_one_above = true;
                            break;
                        }
                    }
                    
                    
                    
                    if ((has_one_left) && (has_one_above)) {
                        possible = true;
                        goto end_check;
                    }
                }
            }
        }
        end_check:
        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}

