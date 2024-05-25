#include <iostream>
#include <string>
#include <cmath>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
  ListNode* string_to_LL(std::string sol){
    ListNode sol_ll((int)sol[0]-48);
    for(int i = 1; i<sol.length(); i++){
      ListNode sol_ll((int)sol[i]-48, &sol_ll);
    }
    return &sol_ll;
  }
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int int_LL1 = 0, int_LL2=0;
    for(int i = 0; l1 ; i++){
      int_LL1+=(int)(l1->val*pow(10.0,(double)i));
      l1 = l1->next;
    }
    for(int i = 0; l2 ; i++){
      int_LL1+=(int)(l1->val*pow(10.0,(double)i));
    }
    int int_sol = int_LL1 + int_LL2;
    std::string sol = std::to_string(int_sol);
    return string_to_LL(sol);
  }
};


int main(){
  ListNode one(7);
  ListNode two(2);
  Solution s;
  ListNode* solution = s.addTwoNumbers(&one,&two);
}