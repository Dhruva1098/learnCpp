#include <iostream>
#include <vector>

using namespace std;
void multiplyMatrices(vector<vector<long long>>& A, const vector<vector<long long>>& B, long long m) {
    vector<vector<long long>> C(2, vector<long long>(2, 0));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % m;
            }
        }
    }
    A = C;
}


long long fibonacciModM(const vector<int>& digits, long long m) {
    vector<vector<long long>> result = {{1, 0}, {0, 1}};
    vector<vector<long long>> F = {{1, 1}, {1, 0}};
    for (int digit : digits) {
        vector<vector<long long>> temp = result;
        for (int i = 0; i < digit-2; ++i) {
            multiplyMatrices(temp, F, m);
        }
        multiplyMatrices(result, temp, m);
        vector<vector<long long>> power = F;
        for (int i = 1; i < 10; ++i) {
            multiplyMatrices(power, F, m);
        }
        F = power;
    }
    return result[1][1];
}

int main() {
    vector<int> digits = {2,1};
    long long result = fibonacciModM(digits, 100000);
    cout << result << endl;
    return 0;
}