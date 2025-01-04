#include <iostream>
#include <vector>
#include <map>
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
        
        // If we can change k elements
        if(k >= n) {
            cout << 1 << endl;
            continue;
        }
        
        // Count frequencies
        map<int, int> freq;
        for(int x : a) freq[x]++;
        
        // Find max frequency
        int max_freq = 0;
        for(auto p : freq) {
            max_freq = max(max_freq, p.second);
        }
        
        // If we can make max_freq + k >= n, we need only 1 operation
        if(max_freq + k >= n) {
            cout << 1 << endl;
        } else {
            // Otherwise we need at least 2 operations
            cout << 2 << endl;
        }
    }
    return 0;
}

