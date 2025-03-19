#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> rot(n,0);
  for(int i = 0; i < n; i++){
    cin >> rot[i];
  }
  for(int i = 1; i <= (1<<n); i++){
    int curr_rot = 1;
    for(int j = 0; j <= 30 && j < n; j++){
      if(i&(1<<j)){
        curr_rot += rot[j];
      } else{
        curr_rot -= rot[j];
      }
    }
    if((curr_rot-1)%360 == 0) {cout << "YES";return 0;}
  } cout << "NO";
}
