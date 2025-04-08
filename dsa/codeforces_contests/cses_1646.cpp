#include <iostream>
using namespace std;

const int N = 2e5 + 9;
long long pref_sum[N];
int a[N];

int main(){
  int n,q;
  cin >> n >> q;
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++){
    pref_sum[i] = pref_sum[i-1] + a[i];
  }
  while(q--){
    int a,b;
    cin >> a >> b;
    cout <<"\n" << pref_sum[b] - pref_sum[a-1]; 
  }
}
