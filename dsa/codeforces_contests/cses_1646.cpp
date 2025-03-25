#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector<int> arr(n);
  vector<int> temp(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for(int i = 1; i < n; i++){
    temp[i-1] += temp[i];
  }
  while(q--){
    size_t a,b;
    cin >> a >> b;
    cout << temp[b] - temp[a-1] ; 
  }
}
