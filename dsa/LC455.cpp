#include <vector>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        auto comp = [] (int a, int b){
            return a > b;
        };
        sort(g.begin(), g.end(), comp);
        sort(s.begin(), s.end(),comp);
        int gs = g.size();
        int ss = s.size();
        if(ss == 0) return 0;
        int i = 0;
        int k = 0;
        int l = 0;
        while(g[i] > s[0]){
            i++;
        }
        while(i<gs && l<ss){
            if(g[i] <= s[l]){
                i++;
                l++;
                k++;
            }
            else if(g[i] > s[l]){
                i++;
            }
        } return k;}
};
