#include <iostream>
#include <queue>

using namespace std;

int main(){
  int n,m; cin >> n >> m;
  queue<int> q;
  queue<int> nu;
  for(int i = 0; i < n; i++){
    int k;
    cin >> k;
    q.push(k);
    nu.push(i+1);
  }
  int last = 0; int j = 0;
  while(!q.empty()){
    last = q.front();
    j = nu.front();
    if(last<=m){
      q.pop(); nu.pop(); continue;
    }
    else{
      q.pop(); nu.pop();
      last -= m;
      q.push(last); nu.push(j);
    }
  }
  cout << j;
}
