include <iostream>
using namespace std;

int main(){
  string a;
  cin >> a;
  string out;
  bool flag = true;
  for(auto i : a){
    if(i == '0' && flag){
      flag = false;
    } else {
      out += i;
    }
  }
  if(flag == true)
    out.pop_back();
  cout << out; 
}
