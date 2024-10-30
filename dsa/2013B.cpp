#include <iostream>
#include <vector>

int main() {
  int n,t;
  std::vector<long long> out;
  long long sum = 0;
  std::cin >> n;
  for(int i = 1; i <= n ; i++){
    int k;
    std::cin >> k;
    std::vector<long long> vec;
    for(int j = 1; j<= k; j++){
      int p;
      std::cin >> p;
      vec.push_back(p);
    }
    int s = vec.size();
    sum = 0;
    for(int t = 0; t < s-2; t++){
      sum = sum + vec[t];
    }
    
    out.push_back(vec[s-1] - (vec[s-2] - sum));
  }
  int s = out.size();
  for(int i = 0; i<s; i++){
    std::cout << out[i] << "\n";
  }

  }

