#include <vector>
#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int n;
    bool what = true;
    vector<int> out;
    cin >> n;
    for(int j = 0; j < n; j++){
      int a;
      cin >> a;
      out.push_back(a);
    }
    int size = out.size();
    for(int i = 1; i < size; i++){
      int diff = out[i-1] - out[i];
      if(diff == 5 || diff == -5 || diff == 7 || diff == -7){
        continue;
      } else { what = false; break;}
    }
    if(what == false ) cout << "NO" << "\n"; else cout << "YES" << "\n";
  }
}
