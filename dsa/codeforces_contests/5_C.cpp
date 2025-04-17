#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string str;
    cin >> str;
    stack<int> s;
    s.push(-1);    int max_len = 0;
    int max_occ = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            s.push(i);
        } else {
            s.pop();
            if (!s.empty()) {
                int len = i - s.top();
                if (len > max_len) {
                    max_len = len;
                    max_occ = 1;
                } else if (len == max_len) {
                    max_occ++;
                }
            } else {
                s.push(i);             }
        }
    }

    if (max_len == 0) {
        cout << 0 << " " << 1 << endl;
    } else {
        cout << max_len << " " << max_occ << endl;
    }
}
