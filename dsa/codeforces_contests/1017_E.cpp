#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Define the maximum number of bits to consider based on the constraint a[i] < 2^30
const int BITS = 30;

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the size of the array for the current test case
        vector<int> a(n);
        // Initialize vectors to store the count of 0s and 1s for each bit position
        vector<int> count0(BITS, 0);
        vector<int> count1(BITS, 0);

        // Read the array elements and populate the bit counts
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            for (int j = 0; j < BITS; ++j) {
                // Check the j-th bit of the current element
                if ((a[i] >> j) & 1) {
                    count1[j]++; // Increment count of 1s for the j-th bit
                } else {
                    count0[j]++; // Increment count of 0s for the j-th bit
                }
            }
        }

        // Initialize the variable to store the maximum sum found
        long long max_total_xor_sum = 0;

        // Iterate through each element a[k] to calculate its corresponding sum
        for (int k = 0; k < n; ++k) {
            long long current_total_xor_sum = 0;
            // Calculate the sum (a[k] XOR a[1]) + ... + (a[k] XOR a[n])
            for (int j = 0; j < BITS; ++j) {
                // Calculate the value of the j-th bit (2^j)
                long long bit_value = (1LL << j);
                // Check the j-th bit of the current element a[k]
                if ((a[k] >> j) & 1) {
                    // If the j-th bit of a[k] is 1, it contributes to the sum when XORed
                    // with elements where the j-th bit is 0.
                    current_total_xor_sum += (long long)count0[j] * bit_value;
                } else {
                    // If the j-th bit of a[k] is 0, it contributes to the sum when XORed
                    // with elements where the j-th bit is 1.
                    current_total_xor_sum += (long long)count1[j] * bit_value;
                }
            }
            // Update the overall maximum sum if the current sum is greater
            max_total_xor_sum = max(max_total_xor_sum, current_total_xor_sum);
        }

        // Output the maximum sum found for the current test case
        cout << max_total_xor_sum << "\n";
    }
    return 0;
}
