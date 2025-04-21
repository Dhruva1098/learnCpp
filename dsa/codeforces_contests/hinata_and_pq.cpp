#include <iostream>
#include <queue>
using namespace std;
int main(){
  int N;
  cin >> N;
  priority_queue<int> pq;
  int a,b;
  cin >> a >> b;
  N -= 2;
  pq.push(a); pq.push(b);
  cout << -1 << "\n" << -1;
  unsigned long long out = 0;
  while(N--){
    int j; cin >>j;
    pq.push(j);
    unsigned long long fir = pq.top(); pq.pop();
    unsigned long long sec = pq.top(); pq.pop();
    unsigned long long thr = pq.top();
    out = fir * sec * thr;
    cout << "\n" << out;
    pq.push(fir); pq.push(sec);

  }
}
