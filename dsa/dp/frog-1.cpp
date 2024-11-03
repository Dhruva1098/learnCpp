#include <climits>
#include <vector>
#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  int arr[t];
  for(int i = 0; i < t; i++){
    int h;
    cin >> h;
    arr[i] = h;
  }
  vector<int> out(t, INT_MAX);
  out[0] = 0;
  out[1] = abs(arr[1] - arr[0]);
  for(int i = 2; i < t; i++){
    out[i] = min(abs(arr[i-1] - arr[i]) + out[i-1], abs(arr[i-2] - arr[i]) + out[i-2]);
  }
  cout << out[t-1];
  
}
