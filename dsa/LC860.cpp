#include <vector>
using namespace std;
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change[2] = {0,0};
        int n = bills.size();
        if(n == 0) return true;
        for(int i = 0; i < n; i++){
            if(bills[i] == 5){
                change[0]++;
            }
            else if(bills[i] == 10){
                if(change[0]>=1){
                    change[0]--;
                    change[1]++;
                } else return false;
            }
            else{
                if(change[0]&&change[1]){
                    change[0]--;
                    change[1]--;
                }
                else if (change[0] >= 3){
                    change[0] -= 3;
                }
                else return false;
                }
            } return true;
        }
    };
