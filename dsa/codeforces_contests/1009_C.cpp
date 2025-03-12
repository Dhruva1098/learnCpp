#include  <iostream>
// Remove the <bit> header as it's C++20 specific

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
        for(int i = 0; i < 30; i++){
            for(int j = 0; j < 30; j++){
                int y = (1 << i) | (1 << j);
                if(y < x && ((x+y) > x^y) && y + (x^y) > x){
                    ans = y;
                }
            }
        } cout << ans << "\n";
    }
}