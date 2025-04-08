#include <iostream>
#include <vector>
using namespace std;
int const N = 2e5+9;
long long prefix_sum[N];
long long prefix_sum_sorted[N];
int main(){
  int k; cin >> k;
  vector<int> arr(k,0);
  for(int i = 0; i < k; i++){
    cin >> arr[i];
  }
  prefix_sum[0] = arr[0];
  for(int i = 1; i <= k; i++){
    prefix_sum[i] = prefix_sum[i-1]+arr[i];
  }
  sort(arr.begin(), arr.end());
  prefix_sum_sorted[0] = arr[0];
  for(int i = 1; i <= k; i++){
    prefix_sum_sorted[i] = prefix_sum_sorted[i-1]+arr[i];
  }

  int q;cin>>q;
  while(q--){
    int t,l,r;cin>>t>>l>>r;
    if(t==1){
      if(l==1){
        cout << prefix_sum[r-1] << "\n";
      }
      else cout << prefix_sum[r-1] - prefix_sum[l-2] << "\n";
    } else {
      if(l==1){
        cout << prefix_sum_sorted[r-1] << "\n";
      }
      else cout << prefix_sum_sorted[r-1] - prefix_sum_sorted[l-2] << "\n";
    }
  }
}
