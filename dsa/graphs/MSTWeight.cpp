#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        // The cost of the MST for a complete graph with n nodes
        // is the sum of the first (n-1) smallest edges.
        // The smallest edges are 3, 4, ..., n+1
        // Sum of these edges is (3 + 4 + ... + (n+1))
        // This is an arithmetic series sum: (n-1) * (3 + (n+1)) / 2
        long long cost = (n - 1) * (n + 4) / 2;
        cout << cost << endl;
    }
    return 0;
}