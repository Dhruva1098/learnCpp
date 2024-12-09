#include <iostream>
#include <vector>
#include <unordered_map>
#include <tuple>
#include <algorithm>
#include <climits>

using namespace std;

// Memoization key type
using Key = pair<int, int>;

// Hash function for pair (used for unordered_map)
struct KeyHash {
    size_t operator()(const Key& key) const {
        return hash<int>()(key.first) ^ hash<int>()(key.second);
    }
};

// Function to solve the problem
int solve(const vector<int>& numbers) {
    unordered_map<Key, int, KeyHash> memo;

    // Recursive helper function with memoization
    function<int(int, int)> dp = [&](int n, int k) {
        if (k == 0) return 0; // Base case: no elements to keep
        if (n < 0) return INT_MIN; // Base case: no elements left, invalid case

        Key state = {n, k}; // Current state
        if (memo.count(state)) return memo[state]; // Check memo

        // Recurrence relation
        int exclude = dp(n - 2, k); // Delete both numbers[n] and numbers[n-1]
        int include = dp(n - 1, k - 1) + numbers[n]; // Keep numbers[n]

        return memo[state] = max(exclude, include);
    };

    return dp(numbers.size() - 1, 3); // Start with full array and k = 3
}

int main() {
    vector<int> arr1 = {1, 4,3,9,7};
    vector<int> arr2 = {1, 2,4,2,3,4,4};

    cout << "Maximum sum for arr1: " << solve(arr1) << endl; // Output: 3
    cout << "Maximum sum for arr2: " << solve(arr2) << endl; // Output: 19

    return 0;
}
