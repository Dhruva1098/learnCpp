#include <iostream>
#include <vector>
using namespace std;

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main(){
  fastIO();

  int n;
  cin >> n;
  vector<long long> out(n,0);  
  for(int i = 0; i < n; i++){
    int a,b;
    cin >> a >> b;
    out[i] = a*b;
  }
  for(int i = 0; i < n; i++){
    cout << out[i] << "\n";
  }
}
