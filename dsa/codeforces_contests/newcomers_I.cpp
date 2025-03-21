#include <climits>
#include <iostream>
#include <vector>

using namespace std;
int main(){
  ios::sync_with_stdio(false); cin.tie(nullptr);
  int n;
  cin >> n;
  while(n--){
    int k;
    int mini = INT_MAX;
    int curr = INT_MAX;
    cin >> k;
    vector<int> out(k,0);
    for(int i = 0 ; i < k; i++){
      cin >> out[i];
    }
    for(int i = 0; i < k; i++){
      for(int j = i+1; j < k; j++){
        if(out[i]+out[j] + j - i < curr) curr = out[i]+out[j] + j - i;
        if(curr < mini) mini = curr;
      }
    } cout << mini << "\n";
  }
}
