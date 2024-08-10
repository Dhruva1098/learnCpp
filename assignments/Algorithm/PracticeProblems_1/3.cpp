#include <iostream>
#include <vector>

void MM(long long A[4][4], long long B[4][1], int m) {
    long long out[4][1] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            out[i][0] += (A[i][j] * B[j][0]) % m;
            out[i][0] %= m;
        }
    }
    for (int i = 0; i < 4; i++) {
        B[i][0] = out[i][0];
    }
}

void MatrixMul(long long A[4][4], long long B[4][4], int m) {
    long long out[4][4] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                out[i][j] += (A[i][k] * B[k][j]) % m;
                out[i][j] %= m;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = out[i][j];
        }
    }
}


long long fib_changed(const std::vector<int>& N, int m) {
    long long Y[4][1] = { {2}, {1}, {0}, {1} };
    long long A[4][4] = { {1, 1, 1, 1}, {1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 0, 1} };
        for (int i = 0; i < N.size(); i++) {
        if (N[i] == 1) MM(A, Y, m);
        MatrixMul(A, A, m);
    }
    return Y[1][0];
}

int main() {
    std::vector<int> n = {1, 0, 1};  // Example input
    std::cout << fib_changed(n, 1000) << std::endl;
}
