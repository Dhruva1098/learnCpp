#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> out(m,0);
  for(int i = 0; i < n; i++){
    int k;
    cin >> k;
    out[k-1]++;
  }
  for(int i = 0; i < m; i++){
    cout << out[i] << "\n";
  }

}
