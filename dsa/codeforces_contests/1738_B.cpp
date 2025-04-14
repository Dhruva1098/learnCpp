#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n,k; cin >> n >> k;
    if (k==1){cout << "YES\n"; continue;}
    vector<long long> temp(n+1);
    for(int i = n-k+1; i <= n; i++){
      cin >> temp[i];
    }
    vector<long long> s(n+1);
    for(int i = n-k+2; i <= n;i++){
      s[i] = temp[i] - temp[i-1];
    }
    if(!std::is_sorted(s.begin() + n-k+2, s.end())){ cout << "NO\n"; continue;}
    if(temp[n-k+1] > s[n-k+2]*(n-k+1)){cout << "NO\n"; continue;}
    cout << "YES\n";
  }
}

