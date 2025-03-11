#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        vector<int> a(t);
        for(int i = 0; i < t; i++){
            cin >> a[i];
        }
        int sum = accumulate(a.begin(), a.end(), 0);
        cout << sum - t + 1 << "\n";
    }
}