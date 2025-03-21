#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> out(n,0);
  int mini = INT_MAX;
  int mi = -1;
  int maxi = INT_MIN;
  int mai = -1;
  for(int i = 0; i < n; i++){
    cin >> out[i];
    if(out[i] > maxi) {maxi = out[i]; mai = i;}
    if(out[i] < mini) {mini = out[i]; mi = i;}
  }
  int temp = maxi;
  out[mai] = out[mi];
  out[mi] = maxi;
  for(int i = 0; i < n; i++){
    cout << out[i] << " ";
  }
}
