#include <iostream>
#include <queue>
using namespace std;
int main(){
  int n;
  cin >> n;
  long long rsum = 0;
  priority_queue<int> pq;
  for(int i = 0; i<n; i++){
    int j;
    cin >> j;
    if(j<0){
      pq.push(j);
    }
    if(rsum + j > 0) rsum += j;
    else if(rsum)
  }
}
