#include  <iostream>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int ans = -1;
        if(__builtin_popcount(x) == 1){
            cout << -1 << "\n";
            continue;
        }
        int z = 0;
        int f1 = 0, f0 = 0;
        for(int i = 0; i <31 ; i++){
            if(x & (1 << i)){
                if(f0 && f1 == 0){
                    z |= 1 << i;
                    f1 = 1;
                }
            } else {
                if(f0 == 0){
                    z |= 1 << i;
                    f0 = 1;
                }
            }
        }
        if (f1) {
            int y = x ^ z;
            cout << y << "\n";
        } else 
            cout << -1 << "\n";
        }
}