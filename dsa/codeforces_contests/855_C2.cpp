#include <iostream>
#include <queue>

using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    priority_queue<int> pq;
    int n; cin >> n;
    unsigned long long po = 0;
    while(n--){
      int j;
      cin >> j;
      if(j != 0){ pq.push(j);}
      if(j == 0 && !pq.empty()){
        po += pq.top(); pq.pop();
      }
    } cout << po << "\n";
  }
}
