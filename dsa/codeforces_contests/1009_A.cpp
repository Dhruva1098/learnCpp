#include <iostream>
#include <vector>
using namespace std;
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        if(l == r && d == u && l == d) cout << "Yes\n";
        else cout << "No\n";
    }
}