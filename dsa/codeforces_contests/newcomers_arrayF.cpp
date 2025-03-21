#include <iostream>
#include <vector>
using namespace std;
int main(){
  ios::sync_with_stdio(false); cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> out(n,0);
  for(int i = n-1; i >= 0; i--){
    cin >> out[i];
  }
  for(int i = 0; i < n; i++){
    cout << out [i] << " ";
  }
}
