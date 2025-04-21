#include <iostream>
#include <tuple>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
int main(){
  int n;
  cin >> n;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  int room = 0;
  vector<tuple<int,int,int>> cust;
  vector<int> arr(n+1);
  for(int i = 1; i <= n; i++){
    int a,b;cin >>a >> b;
    cust.push_back({a,b,i});
  }
  sort(cust.begin(), cust.end());
  for(auto& [a,d,idx] : cust){
    if(!pq.empty() && pq.top().first < a){
      int room_num = pq.top().second;
      pq.pop();
      arr[idx] = room_num;
      pq.push({d, room_num});
    } else {
      ++room;
      arr[idx] = room;
      pq.push({d,room});
    }
  }
  cout << room << "\n";
  for(int i = 1; i <= n; i++){
    cout << arr[i] << " ";
  }
}
