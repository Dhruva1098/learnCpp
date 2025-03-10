#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, m, k;
  cin >> n >> m >> k;
  vector<long long> a(n+1);
  vector<int> l(m+1), r(m+1), d(m+1);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int i = 1; i <= m; i++){
    cin >> l[i] >> r[i] >> d[i];
  }
  vector<long long> onFreq(m+2, 0);
  for (int i = 0; i<k; i++){
    int x,y;
    cin >>x>>y;
    onFreq[x] +=1;
    onFreq[y+1] -=1;
  }
  for(int i = 1; i <= m; i++){
    onFreq[i] += onFreq[i-1];
  }

  vector<long long> diff(n+2, 0);
  for (int i = 1; i<=m; i++){
    if(onFreq[i] > 0) {
      diff[l[i]] += d[i]*onFreq[i];
      diff[r[i] + 1] -= d[i]*onFreq[i];
    }
  }
  
  for(int i = 1; i<=n; i++){
    diff[i] += diff[i-1];
    a[i] += diff[i];
  }

  for(int i = 1; i<=n; i++){
    cout <<a[i] << " ";
  }
  cout <<endl;

}
