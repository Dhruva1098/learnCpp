#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,x;
    int team = 0;
    int curr = 0;
    cin >> n >> x;
    vector<int> stu(n);
    for(int i = 0; i < n; i++){
      cin >> stu[i];
    }
    sort(stu.begin(), stu.end());
    for(int j = n-1; j >= 0;){
      if(stu[j] >= x ) {curr++; j--;}
      else{
        while(team*stu[j--]) team++;
        curr++;
      }
    }
    cout << curr << "\n";
  }
}
