#include <iostream>
#include <vector>

void matrix_mul_mod(std::vector<std::vector<int>>& A, std::vector<std::vector<int>>& B, long m) {
    std::vector<std::vector<int>> out = {{0,0},{0,0}};
    out[0][0] = (A[0][0] * B[0][0] + A[0][1] * B[1][0]) % m;
    out[0][1] = (A[0][0] * B[0][1] + A[0][1] * B[1][1]) % m;
    out[1][0] = (A[1][0] * B[0][0] + A[1][1] * B[1][1]) % m;
    out[1][1] = (A[1][0] * B[0][0] + A[1][1] * B[1][1]) % m;
    A = out;
}

void matrix_mul(std::vector<std::vector<int>>& A, std::vector<std::vector<int>>& B) {
    std::vector<std::vector<int>> out = {{0,0},{0,0}};
    out[0][0] = (A[0][0] * B[0][0] + A[0][1] * B[1][0]);
    out[0][1] = (A[0][0] * B[0][1] + A[0][1] * B[1][1]);
    out[1][0] = (A[1][0] * B[0][0] + A[1][1] * B[1][1]);
    out[1][1] = (A[1][0] * B[0][0] + A[1][1] * B[1][1]);
    A = out;
}

int fibonacci_matrix_mul(std::vector<int> N, int m) {
    std::vector<std::vector<int>> X = {{1,1},{0,1}};
    std::vector<std::vector<int>> Y = {{1,0},{0,1}};
    int K = N.size();
    int i = 0;
    while (i <= K) {
        if (N[i] == 1) matrix_mul_mod(Y,X,m);
        matrix_mul_mod(X, X, m);
        i++;
    }
    return Y[1][0];
 }

int main() {
    std::vector<int> N = {1,0,0,1};
    int fib = fibonacci_matrix_mul(N, 10000000);
    std::cout<<fib;
}