/*
* 1. Let F(0) = 0, F(1) = 1 and F(n) = (F(n - 1) + F (n - 2)) % m. for n < 10^18 and m < 10^5 write an efficient algorithm to conpute F(n).
*/
#include <iostream>
long long calculate_fibinacci(long long n, int m) {
  if (n < 2) return n;
  long long F[6*m + 1];
  int i;
  F[0] = 0;
  F[1] = 1;
  for (i = 2; i <= 6*m + 1; i++){
    F[i] = (F[i - 1] + F[i - 2]) % m;
    if (F[i - 1] == F[0] && F[i] == F[1]) break;
  }
  int p = i - 1;
  return F[n % p];
}
int main() {
  std::cout << calculate_fibinacci(33, 80000);
}
