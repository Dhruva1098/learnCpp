#include <iostream>
#include <vector>
#include <deque>

using std::deque;
using std::vector;

vector<int> compute_max_window(vector<int> array, int k) {
  deque<int> dq;
  vector<int> out;
  int n = array.size();
  for (int i = 0; i < n; i++){
      if(!dq.empty() && dq.front() == i - k) dq.pop_front();
      while(!dq.empty() && array[dq.back()] < array[i]) dq.pop_back();
      dq.push_back(i);
      if(i >= k - 1) out.push_back(array[dq.front()]);
  } return out;
}
int main(){
    vector<int> array = {7,6,3,9,10,11,4,3,2,1};
    vector<int> out = compute_max_window(array, 3);
    for (int it : out) {
      std::cout << it << ", ";
    }
}
