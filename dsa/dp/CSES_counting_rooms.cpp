#include "bits/stdc++.h"
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<bool>>graph(n+2,vector<bool>(m+2,false));
  for(int i = 0; i < n ;i++){
    for(int j  =0; j < m; j++){
      char x; cin >> x;
      if(x=='.'){
        graph[i][j] = true;
      }
    }
  }
  int count = 0;
  function<void(int,int)> dfs = [&](int i, int j) {
    graph[i][j] = false;
    if(graph[i+1][j]) dfs(i+1,j);
    if(graph[i-1][j]) dfs(i-1,j);
    if(graph[i][j+1]) dfs(i,j+1);
    if(graph[i][j-1]) dfs(i,j-1);
  };
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(graph[i][j]) {
        count++;
        dfs(i,j);
      }
    }
  } cout << count << endl; 
}

