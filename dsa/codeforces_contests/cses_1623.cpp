#include <climits>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> apples(n,0);
  for(int i = 0; i<n;i++){
    cin >> apples[i];
  }
  int mini = INT_MAX;
  long long total = accumulate(apples.begin(),apples.end(),0);
  for(int i =0; i < (1<<n); i++){
    int first = 0;
      for(int j = 0; j < 30; j++){
        if(i&(1<<j)){
          first+=apples[j];
        }
      } if(abs((total-first)-first) < mini) mini = abs(total - first-first);
  } cout << mini;
}
