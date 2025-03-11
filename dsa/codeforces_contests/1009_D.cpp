#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;
typedef long long ll;

int countPoints(ll cx, ll r) {
    int count = 0;
    for (ll x = cx - r; x <= cx + r; x++) {
        ll dy = sqrt(r * r - (x - cx) * (x - cx));
        count += 2 * dy + 1;
    }
    return count;
}

int solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> centers(n), radii(n);
    for (int i = 0; i < n; i++) {
        cin >> centers[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> radii[i];
    }
    set<pair<ll, ll>> points;
    for (int i = 0; i < n; i++) {
        ll cx = centers[i];
        ll r = radii[i];
        for (ll x = std::max(cx - r, -m); x <= std::min(cx + r, m); x++) {
            ll dy_squared = r * r - (x - cx) * (x - cx);
            if (dy_squared < 0) continue;
            ll dy = sqrt(dy_squared);
            for (ll y = std::max(-dy, -m); y <= std::min(dy, m); y++) {
                if (abs(x) <= m && abs(y) <= m) {
                    points.insert({x, y});
                }
            }
        }
    }
    return points.size();
}

int main() {
    int t;
    cin >> t;
    vector<int> results(t);
    for (int i = 0; i < t; i++) {
        results[i] = solve();
    }
    for (int i = 0; i < t; i++) {
        cout << results[i] << "\n";
    }
}