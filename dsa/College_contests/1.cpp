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
    vector<pair<int, int>> intervals;
    for(int i = 0; i < n; ++i) {
        intervals.push_back({m[i].first, 1});
        intervals.push_back({m[i].second + 1, -1});
    }
    sort(intervals.begin(), intervals.end());
    int out = 0, current = 0, last = 1;
    for(auto &interval : intervals) {
        if(current == 0) {
            out += interval.first - last;
        }
        current += interval.second;
        last = interval.first;
    }
    if(current == 0) {
        out += d + 1 - last;
    }
    cout << out << endl;
    return 0;
}