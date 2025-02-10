#include <string>
#include <deque>

using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        deque<char> st;
        string out;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(int(s[i]) > 90 ){
                st.push_back(s[i]);
            } else st.pop_back();
        }
        while(!st.empty()){
            out = out+st.front();
            st.pop_front();
        } return out;
    }
};
