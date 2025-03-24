#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;
        long long combined = x + y;
        long long fc = a / combined;
        long long dac = fc * combined;
        if (dac + x > a) {
            cout << "NO\n";
          } else {
            cout << "YES\n";
          }
    }
    return 0;
}
