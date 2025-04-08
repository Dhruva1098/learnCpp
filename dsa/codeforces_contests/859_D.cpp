#include <iostream>
using namespace std;
int const N = 2e5+9;
long long prefix_sum[N];
int arr[N];

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,q;cin>>n>>q;
    for(int i = 1; i <=n;i++){
      cin >> arr[i];
    }
    for(int i = 1;i<=n;i++){
      prefix_sum[i] = prefix_sum[i-1]+arr[i];
    }
    while(q--){
      int l,r,k;cin>>l>>r>>k;
      int sum = prefix_sum[n] - (prefix_sum[r] + prefix_sum[l-1]) + k*(r-l+1);
      if(sum%2!=0){cout << "YES\n";} else cout << "NO\n";
    }
  }  
}
