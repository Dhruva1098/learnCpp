#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
  long long a,b;
  cin >> a >> b;
  vector<long long> out;
  int n = sqrt(a);
  for(int i = 1; i <= n; i++){
    if(a%i == 0){
      if(i == a/i) out.push_back(i);
      else{
        out.push_back(i);
        out.push_back(a/i);
      }
    }
  }
  sort(out.begin(), out.end());

  if(out.size() >= b) cout << out[b-1];
  else cout << -1;

}
