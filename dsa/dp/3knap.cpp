
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int threeKnapsack(vector<int>& weights, vector<int>& values, int W1, int W2, int W3) {
    int n = weights.size();
    vector<vector<int>> dp(W2 + 1, vector<int>(W3 + 1, 0));
    vector<vector<int>> temp(W2 + 1, vector<int>(W3 + 1, 0));

    for (int w1 = 0; w1 <= W1; ++w1) {
        for (int w2 = 0; w2 <= W2; ++w2) {
            for (int w3 = 0; w3 <= W3; ++w3) {
                for (int i = 0; i < n; ++i) {
                    if (w1 >= weights[i])
                        dp[w2][w3] = max(dp[w2][w3], temp[w2][w3] + values[i]);
                    if (w2 >= weights[i])
                        dp[w2][w3] = max(dp[w2][w3], dp[w2 - weights[i]][w3] + values[i]);
                    if (w3 >= weights[i])
                        dp[w2][w3] = max(dp[w2][w3], dp[w2][w3 - weights[i]] + values[i]);
                }
                temp[w2][w3] = dp[w2][w3];
            }
        }
    }

    return dp[W2][W3];
}


int main() {
    vector<int> weights = {2, 1, 5, 3, 8};
    vector<int> values = {1,5,3,11,1};
    int W1 = 2, W2 = 3, W3 = 6;

    cout << "Maximum value in 3-knapsack problem: " << threeKnapsack(weights, values, W1, W2, W3) << endl;

    return 0;
}