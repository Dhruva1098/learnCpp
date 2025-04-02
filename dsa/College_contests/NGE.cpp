#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// next greater element in two vectors
int main() {
  int m,n;
  cin >> m >> n;
  vector<int> a(m);
  vector<int> b(n);
  for(int i = 0; i < m; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  vector<int> res(m);
  unordered_map<int, int> nge_map;
  stack<int> s;

  for (int i = n - 1; i >= 0; --i) {
    while (!s.empty() && s.top() <= b[i]) {
      s.pop();
    }
    if (s.empty()) {
      nge_map[b[i]] = -1;
    } else {
      nge_map[b[i]] = s.top();
    }
    s.push(b[i]);
  }

  for (int i = 0; i < m; ++i) {
    res[i] = nge_map[a[i]];
  }

  for (int i = 0; i < m; ++i) {
    cout << res[i] << " ";
  }
  cout << endl;
}
