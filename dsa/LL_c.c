#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node* next;
  int val;
}; typedef struct node node;

node *my_LL = NULL;

void printLL(node *head){
  node* temp;
  temp = head;
  while(!temp->next){
    printf("%d -> ", temp->val);
    temp = temp->next;
  }
  printf("%d", temp->val);
}

void addNode(node* head, int value){
  node *ptr = (node*)malloc(sizeof(node));
  if(!ptr){
    printf("heap is full \n");
    return;
  }
  ptr->val = value;
  ptr->next = NULL;
  if(head==NULL){
    head = ptr;
    return;
  } 
  node *temp = head;
  while(temp->next!=NULL){
    temp = temp->next;
  }
  temp->next = ptr;
}

int main(){
  addNode(my_LL, 1);
  addNode(my_LL, 2);
  printLL(my_LL);
}