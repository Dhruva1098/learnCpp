#include <iostream>
#include <queue>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    priority_queue<int> pq;
    int n; cin >> n;
    while(n--){
      int k; cin >> k;
      pq.push(k);
    }
    while(!pq.empty()){
      int j = pq.top();
      pq.pop();
      cout << j << " "; 
      j /= 2;
      if(j != 0) pq.push(j);
    }
  }
}
