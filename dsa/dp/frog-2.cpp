#include <climits>
#include <functional>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;
int main(){
  int t,k;
  cin >> t >> k;
  int arr[t];
  for(int i = 0; i < t; i++){
    int h;
    cin >> h;
    arr[i] = h;
  }
  vector<int> out(t, INT_MAX);
  out[0] = 0;
  out[1] =abs(arr[0]- arr[1]);
  for(int i = 2; i < t; i++){
  priority_queue<int, vector<int>, greater<int>> pq;
    for(int j = 1; j <= k; j++){
      if(i-j >= 0){
      int l = abs(arr[i-j] - arr[i]) + out[i-j];
      pq.push(l);}
    }
    out[i] = pq.top();
  }
  cout << out[t-1]; 
}
