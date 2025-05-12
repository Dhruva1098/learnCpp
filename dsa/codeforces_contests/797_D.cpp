#include <iostream>
using namespace std;
int arr[200005];
int main(){
  int t; cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
      char k; cin >> k;
      if(k=='B') arr[i] = 1;
      else arr[i] = 0;
    }
    long long max = -1;
    long long pre = 0;
    int i = 1;
    for(; i <= k; i++){
      pre += arr[i];
    }
    max = pre;
    for(;i <= n;i++){
      pre += arr[i];
      pre -= arr[i-k];
      if(pre > max) max = pre;
    }
    cout << k - max << "\n";
  }
}
