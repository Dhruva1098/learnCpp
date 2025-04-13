#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int BITS = 30;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> count0(BITS, 0);
        vector<int> count1(BITS, 0);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            for (int j = 0; j < BITS; ++j) {
                if ((a[i] >> j) & 1) {
                    count1[j]++;                } else {
                    count0[j]++;                }
            }
        }

        long long max_total_xor_sum = 0;

        for (int k = 0; k < n; ++k) {
            long long current_total_xor_sum = 0;
            for (int j = 0; j < BITS; ++j) {
                long long bit_value = (1LL << j);
                if ((a[k] >> j) & 1) {
                    current_total_xor_sum += (long long)count0[j] * bit_value;
                } else {
                    current_total_xor_sum += (long long)count1[j] * bit_value;
                }
            }
            max_total_xor_sum = max(max_total_xor_sum, current_total_xor_sum);
        }
        cout << max_total_xor_sum << "\n";
    }
    return 0;
}
