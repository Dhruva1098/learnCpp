#include <iostream>
#include <vector>

const int MOD = 1000000007;

int calculateF(int n) {
    std::vector<long long> f(n + 1, 0);
    f[0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int k = 0; k < i; ++k) {
            f[i] = (f[i] + f[k] * f[i - 1 - k]) % MOD;
        }
    }

    return f[n];
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int result = calculateF(n);
    std::cout << "The value of f(" << n << ") % " << MOD << " is: " << result << std::endl;

    return 0;
}