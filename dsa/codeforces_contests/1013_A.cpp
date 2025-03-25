#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int z = 0;
    int out = 0;
    int o = 0;
    int tw = 0;
    int th = 0;
    int f = 0;
    for(int i = 0; i < n; i++){
      int j;
      cin >> j;
      if(j == 0 && z<3) z++;
      else if(j == 1 && 0 < 1) o++;
      else if(j == 2 && tw < 2) tw++;
      else if(j == 3 && th < 1) th++;
      else if(j == 5 && f < 1) f++;
      if(z == 3 && o == 1 && tw == 2 && th == 1 && f == 1) out = i+1;
    } cout << out << "\n"; 
  }
}
