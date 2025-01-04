#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if(k >= n-1) {
            cout << 1 << endl;
            continue;
        }
        
        int ans = (n + k - 1) / (k + 1);
        cout << ans << endl;
    }
    return 0;
}

