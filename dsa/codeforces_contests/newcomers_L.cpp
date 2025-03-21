#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void running_max(vector<int>& arr, int s){
  deque<int> d(s);
  for(int i = 0; i < s; i++){
    while(!d.empty() && arr[i] >= arr[d.back()]){
      d.pop_back();
    }
    d.push_back(i);
  }
  for(int i = s; i < arr.size(); i++){
    cout << arr[d.front()] << " ";
    while(!d.empty() && d.front() <= i - s){
      d.pop_front();
    }
    while(!d.empty() && arr[i] >= arr[d.back()]){
      d.pop_back();
    } d.push_back(i);
  } cout << arr[d.front()] << " ";
}

int main(){
  int k;
  cin >> k;
  while(k--){
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i = 0; i < n; i++){
      cin >> arr[i]; 
    }
    for(int i = 1; i <= n; i++){
      running_max(arr, i);
    }
    cout << "\n";
  }
}
