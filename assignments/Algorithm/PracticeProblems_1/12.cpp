#include <__config>
#include <cstddef>
#include <iostream>
struct node{
    int data;
    node* next;
};
node* reverse_list(node* head){
    node* current = head;
    node* next = nullptr;
    node* prev = nullptr;
    while(current->next){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } return prev;
}
