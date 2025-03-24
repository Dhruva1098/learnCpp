#include <iostream>
using namespace std;

int main(){
  string s1,s2;
  getline(cin, s1);
  getline(cin, s2);
  int a = s1.length() - 1;
  int b = s2.length() - 1;
  int oa = a;   int ob = b;  while(s1[--a] != ' ');
  while(s2[--b] != ' ');
  while(s1[a++] == s2[b++] && a <= oa && b <= ob);  if(--a == oa && --b == ob) cout << "ARE brothers";
  else cout << "NOT";
  
}
