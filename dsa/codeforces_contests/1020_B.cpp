#include <iostream>
using namespace std;
int arr[200005];
int main(){
  int t; cin >> t;
  while(t--){
    int n,x; cin >> n >> x;
    if(n==x){
      for(int i = 0; i < n; i++) cout << i << " ";
      cout << "\n";
    }
    else if(x == 0){
      for(int i = n-1; i > 0; i--) cout << i << " "; cout << 0;
      cout << "\n";
    }
    else {
      int i = 0;
      while(i < x-1){
        cout << ++i << " ";
      } cout << 0 << " ";
      int j = n-1;
      while (j > i) {
        cout << j-- << " ";
      }
      cout << "\n";
    }
  }
}
