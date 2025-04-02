#include <iostream>
#include <string>
class Solution {
public:
  int reverse(int x) {
    int reverse_x;
    std::string str = std::to_string(x);
    std::string rev_str = "";
    for(int i = str.length()-1;i>=0;i--){
      rev_str+=str[i];
    }
    try{
      reverse_x = std::stoi(rev_str);
    }catch(const std::out_of_range& e){return 0;}
    reverse_x = x>0?std::stoi(rev_str):std::stoi(rev_str)*-1;
    return reverse_x;
  }
};
int main(){
  Solution s;
  int returnVal = s.reverse(1534236469);
  std::cout<<returnVal;
}