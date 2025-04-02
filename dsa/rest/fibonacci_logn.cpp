#include <iostream>

int fibonacci(long n, int m) {
    int limit = 6*m + 1;
    int F[limit];
    int i = 2;
    F[0] = 0; F[1] = 1;
    for (i ; i <= limit; i++ ) {
        F[i] = (F[i - 1] + F[i - 2]) % m;
        if (F[i - 1] == 0 && F[i] == 1) break;
    }
    int p = i - 1;
    return F[n%p]; 
}
int main() {
    std::cout << fibonacci(10000000000000, 30);
}