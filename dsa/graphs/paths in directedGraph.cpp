#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int n;
    std::cin >> n;

    std::vector<int> dp(n + 1, 0);
    dp[1] = 1; // There's one path from node 1 to node 1

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            dp[i] = (dp[i] + dp[j]) % MOD;
        }
    }

    std::cout << dp[n] << std::endl;
    return 0;
}