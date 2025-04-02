#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void bfs(vector<vector<char>>& map, int startX, int startY, int m, int n){
  stack<pair<int,int>> curr;
  curr.push({startX, startY});
  while(!curr.empty()){
    pair<int,int> p = curr.top();
    curr.pop();
    int x = p.first;
    int y = p.second;
    if(x < 0 || x >= m || y < 0 || y >= n || map[x][y] == '#'){
      continue;
    }
    map[x][y] = '#';
    curr.push({x+1,y});
    curr.push({x-1,y});
    curr.push({x,y+1});
    curr.push({x,y-1});
  }
}


int main() {
  int m,n;
  cin >> m >> n;
  vector<vector<char>> map;
  vector<char> v;
  for(int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      char k;
      cin >> k;
      v.push_back(k);
    }
    map.push_back(v);
    v.erase(v.begin(),v.end());
  }
  int count = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(map[i][j] == '.'){
        bfs(map,i,j,m,n);
        count++;
      }
    }
  } cout << count << endl;
  return 0;
}

