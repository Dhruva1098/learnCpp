#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool custComp(pair<int,int> &a, pair<int,int>& b){
  if (a.first!= b.first)
    return a.first < b.first;
  else 
    return a.second > b.second;
}
int main(){
  string s; cin >> s;
  int n = s.size();
  vector<pair<int, int>> tm(n);
  int bal = 0;
  for(int i = 0; i < n; i++){
    tm[i].first = bal;
    tm[i].second = i;
    if(s[i] == '(') bal++;
    else bal--;
  }
  sort(tm.begin(), tm.end(), custComp);
  for(int i = 0; i < n; i++){
    cout << s[tm[i].second];  
  }
}
