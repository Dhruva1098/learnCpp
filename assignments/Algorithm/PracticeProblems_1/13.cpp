#include <iostream>
struct node {
    int data;
    node* next;
};
bool has_loop(node* head){
    node* slow = head; node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;;
    }
    return false;
}
