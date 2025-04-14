#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<long long> pre(n);
    for (int i = 0; i < n; i++) {
        cin >> pre[i];
    }

    int count = 0;
    long long sum = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        sum += pre[r];
        while (sum > t && l <= r) {
            sum -= pre[l++];
        }
        if (sum == t) {
            count++;
        }
    }

    cout << count;
    return 0;
}
