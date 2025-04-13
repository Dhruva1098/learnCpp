#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> grid(n, vector<int>(m));
        int current_val = 1;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                grid[i][j] = current_val;
                current_val = (current_val % k) + 1;
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << grid[i][j] << (j == m - 1 ? "" : " ");
            }
            cout << endl;
        }
    }
    return 0;
}
