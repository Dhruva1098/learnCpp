#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> m(n);
    for(int i = 0; i < n; ++i) {
        cin >> m[i].first >> m[i].second;
    }
    vector<int> wd(d + 1, 1);
    for(int i = 0; i < n; ++i) {
        for(int j = m[i].first; j <= m[i].second; ++j) {
            wd[j] = 0;
        }
    }
    int out = accumulate(wd.begin() + 1, wd.end(), 0);
    cout << out << endl;
}
