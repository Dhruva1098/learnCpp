#include <iostream>
struct node {
    int data;
    node* next;
};
void remove_cycle(node* head){
    node* slow = head; node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(slow != fast) return;
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    while(fast->next != slow){
        fast = fast->next;
    } fast->next = nullptr;
}
