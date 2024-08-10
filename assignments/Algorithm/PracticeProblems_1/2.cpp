/*
*
* 2. Let F(0) = 0, F(1) = 1 and F(n) = (F(n - 1) + F (n - 2)) % m. for n < 10^10,000 and m < 10^5 write an efficient algorithm to conpute F(n)
*/

#include <iostream>
#include <vector>

long long calculate_fibonacci(std::vector<int> n, int m) {
  if (n.size() == 1 && n[0] < 2) return n[0];
  int i;
  int k = sizeof(n);
  long long F[6*m + 1];
  F[0] = 0;
  F[1] = 1;
  for(i = 2; i <= 6*m + 1; i++) {
    F[i] = (F[i - 1] + F[i - 2]) % m;
    if (F[i] == F[1] && F[i - 1] == F[0]) break;
  }
  int p = i - 1;
  int r = 0;
  for( i = k - 1; i > -1 ; i--){
    r = (r*10 + n[i]) % p;
  }
  return F[r];
}

int main(){
  std::vector<int> n = {3,3};
  std::cout << calculate_fibonacci(n, 80000);
}
