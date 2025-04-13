#include <iostream>
#include <vector>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int m = 2*n;
    int sum = 0;
    vector<int> p(2*n + 1,0);
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= n; j++){
        cin >> p[i+j];
      }
    }
    for(int i = 0; i <= m; i++){
      sum += p[i];
    }
    p[1] = (m*m + m)/2 - sum;
    for(int i = 1; i <= m; i++){
      cout << p[i] << " ";
    } cout << "\n";
  }
}
