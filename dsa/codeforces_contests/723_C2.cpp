#include <iostream>
#include <queue>

using namespace std;
int main(){
  int t; cin >> t;
  long long h = 0;
  int out = 0;
  bool flag = false;
  priority_queue<int> pot;
  int q;
  while(t--){
    cin >> q;
    if(q < 0 && flag == false) continue;
    if(q >= 0){ h += q; out++; flag = true;} 
    else{pot.push(q);}
  }
  while(!pot.empty()){
    int j = pot.top();
    pot.pop();
    if( j + h >= 0){
      h += j;
      out++;
    }
  } cout << out;
}

