#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  long long x;
  cin >> n >> x;
  unordered_map<long long, int> um;
  um.reserve(1<<20);
  um[0] = 1;
  long long sum = 0; long long count = 0;
  for(int i = 0; i < n; i++){
    long long k; cin >> k;
    sum += k;
    count += um[sum - x];
    um[sum]++;
  }
  cout << count;
}
