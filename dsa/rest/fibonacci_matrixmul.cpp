#include <iostream>
#include <vector>

void matrix_mul_mod(std::vector<std::vector<long long>>& A, std::vector<std::vector<long long>>& B, long m) {
    std::vector<std::vector<long long>> C(2, std::vector<long long>(2, 0));
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

long long fibonacci_matrix_mul(std::vector<int> N, int m) {
    std::vector<std::vector<long long>> X = {{1,1},{1,0}};
    std::vector<std::vector<long long>> Y = {{1,0},{0,1}};
    int K = N.size();
    int i = 0;
    while (i < K) {
        if (N[i] == 1) matrix_mul_mod(Y,X,m);
        matrix_mul_mod(X, X, m);
        i++;
    }
    return Y[1][1];
 }

int main() {
    std::vector<int> N = {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int fib = fibonacci_matrix_mul(N, 10000000);
    std::cout<<fib;
}
