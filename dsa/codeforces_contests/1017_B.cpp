#include <iostream>

using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n,m,l,r;cin>>n>>m>>l>>r;
    int t = 0;
    int y = 0;
    while(m--){
      if(t>l) t--;
      else if(r>y) y++;
    } cout << t << " " << y << "\n";

  }
}
