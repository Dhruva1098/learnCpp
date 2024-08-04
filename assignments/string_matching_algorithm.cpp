#include <vector>
#include <iostream>
#include <cmath>

bool string_match(const std::vector<int>& text, const std::vector<int>& P) {
    int n = text.size();
    int m = P.size();
    if (m > n) return false;
    int z = std::pow(2, m - 1);
    int x = 0; 
    int y = 0;
    int i = 0;
    for (i = 0; i < m; ++i) {
        x = x * 2 + P[i];
        y = y * 2 + text[i];
    }
    do {
        if (x == y)  return true;
        y = 2 * (y - text[i - m] * z) + text[i]; i++;
    } while (i <= n);
    return false;
}

int main(){
  std::vector<int> N = {1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,0,0,1,0,1,1,1,1,1};
  std::vector<int> M = {1,1,0,0,1};
  std::cout << string_match(N,M);
}
