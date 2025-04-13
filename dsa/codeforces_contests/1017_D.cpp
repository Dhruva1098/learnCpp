#include <iostream>
#include <string>
#include <cstring>
int arr[200005];
int arrp[200005];
char arr_char[200005];
char arrp_char[200005];
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);  cin.tie(NULL);

  int t;
  cin >> t;
  while(t--){
    memset(arr, 0, sizeof(arr));
    memset(arrp, 0, sizeof(arrp));
    string p,s;
    cin >> p >> s;
    if(p[0] != s[0]){ cout << "NO" << "\n"; continue;}

    int pl = p.length();
    int sl = s.length();

    int j_p = 0; int count = 1;
    for(int i = 1; i < pl; i++){
      if(p[i] == p[i-1]) {
          count ++;
      } else {
          arr[j_p] = count;
          arr_char[j_p] = p[i-1];
          j_p++;
          count = 1;
      }
    }
    arr[j_p] = count;
    arr_char[j_p] = p[pl-1];
    j_p++; 

    int j_s = 0; count = 1;
    for(int i = 1; i < sl; i++){
      if(s[i] == s[i-1]) {
          count ++;
      } else {
          arrp[j_s] = count;
          arrp_char[j_s] = s[i-1];
          j_s++;
          count = 1;
      }
    }
    arrp[j_s] = count;
    arrp_char[j_s] = s[sl-1];
    j_s++;

    bool flag = true;
    if(j_p != j_s) {
        flag = false;
    } else {
        for(int k = 0; k < j_p; k++) {
        if(arr_char[k] != arrp_char[k] || arr[k] > arrp[k] || arrp[k] > 2 * arr[k]) {
                flag = false;
                break;
            }
        }
    }

    if(flag) cout << "YES\n"; else cout << "NO\n";
  }
}
