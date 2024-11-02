
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int n,k;
    cin >> n >> k;
    int min = n>k?k:n;
    vector<long long> cost(k, 0);
    for(int j = 0; j < k; j++){
      int b,c;
      cin >> b >> c;
      cost[b-1] += c;
    }
    sort(cost.rbegin(), cost.rend());
    int out = 0;
    for(int i = 1; i <= min; i++){
      out += cost[i-1];
    }
    cout << out << "\n";
  }
}
