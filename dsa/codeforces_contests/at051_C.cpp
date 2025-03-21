#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int out = 0;
  cout << stoi(s.substr(0)) << "\n";
  int size = s.length() - 1;
  for(int i = 0; i < (1<<size); i++){
    cout << "i:" << i << "\n";
    int last;
      for(int j = 0; j < 4; j++){
      cout << "    j:" << j << "\n"; 
      last = 0;
        if(i&(1<<j) && j < 3){
          cout << "hit for:" << j << "\n";
          cout << "    last:" << last <<"\n";  
          if(j-last == 0){
            out+=stoi(s.substr(last,1));
            cout << "added " << s.substr(last,1) << " : " << stoi(s.substr(last,1)) << "\n";  
          } else {
            out+=stoi(s.substr(last,j-last));
            cout << "added " << s.substr(last,j-last) << " : " << stoi(s.substr(last,j-last)) << "\n";
          } 
          last = j;
          cout << "    outL:"<<out<<"\n";
      }     } out += stoi(s.substr(last));
            cout << "added " << s.substr(last) << " : " << stoi(s.substr(last)) << "\n";  
  } cout << out;

}
