#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  vector<string> out(2);
  cin >> out[0] >> out[1];
  sort(out.begin(), out.end());
  cout << out[0];
}
