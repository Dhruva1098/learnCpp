#include <climits>
#include <iostream>
#include <stack>

int arr[200001];
using namespace std;
int main(){
  int t; cin >> t;
  for(int i = 1; i <= t; i++){
    cin >> arr[i];
  }
  arr[0] = INT_MAX;
  stack<int> s;
  s.push(0);
  for(int i = 1; i <=t; i++){
    if(s.empty()) s.push(arr[i]);
    while(!s.empty() && arr[s.top()] >= arr[i])  s.pop();
    if(!s.empty()) cout << s.top() << " ";
    else cout << 0 << " ";
    s.push(i);
  }
}
