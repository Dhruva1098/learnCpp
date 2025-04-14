#include <iostream>
#include <vector>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.length();
  vector<long long> prefix_sum(n,0);
  if(s[0] == 'a') prefix_sum[0] = 1;
  for(int i = 1; i < n; i++){
    if(s[i] == 'a'){
      prefix_sum[i] = prefix_sum[i-1] + 1;
    }
    else prefix_sum[i] = prefix_sum[i-1];
  }
  int k; cin >> k;
  while(k--){
    int l,r;cin >> l >> r;
    if(l == 1){
      cout << prefix_sum[r-1] << "\n";
    }
    else cout << prefix_sum[r-1] - prefix_sum[l-2] << "\n";
  }
}
