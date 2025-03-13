#include <iostream>
#include <vector>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> out(n,0);
    for(int i = 0; i < n; i++){
      int a;
      cin >> a;
      out[i] = a;
    }
    sort(out.begin(), out.end());
    vector<int> b(n);
    b[0] = 1;
    for (int i = 1; i < n; i++) {
      b[i] = min(b[i - 1] + 1, out[i]);
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
      ans += out[i] - b[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
