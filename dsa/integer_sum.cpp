#include <iostream>
#include <string>
#include <cmath>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(NULL) {}
  ListNode(int x) : val(x), next(NULL) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
  ListNode sol_LL;
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = &sol_LL;
    int int_LL1 = 0, int_LL2=0;
    for(int i = 0; l1 ; i++){
      int_LL1+=(int)(l1->val*pow(10.0,(double)i));
      l1 = l1->next;
    }
    for(int i = 0; l2 ; i++){
      int_LL2+=(int)(l2->val*pow(10.0,(double)i));
      l2 = l2->next;
    }
    int int_sol = int_LL1 + int_LL2;
    std::string str_sol = std::to_string(int_sol);
    sol_LL.val=(int)str_sol[str_sol.length()-1]-48;
    for(int i = str_sol.length()-2; i>=0; i--){
      ListNode temp((int)str_sol[i]-48);
      head->next = &temp;
      head = head -> next;
    }
    return &sol_LL;
  }
};


int main(){
  ListNode one(7);
  ListNode two(8);
  Solution s;
  ListNode* solution = s.addTwoNumbers(&one,&two);
}