#include <iostream>
#include <algorithm>
const int ksize = 10000;
const int kprime = 100006;
class node {
  int data;
  node* next;
public:
  node(int data) : data(data) , next(nullptr) {}

  void insert(int data, node*& head) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
  }

  bool find_val(int data, node*& head) {
    node* current = head;
    while (current->next != nullptr) {
      if (current->data == data) {
        return true;
      }
      current = current->next;
    } return false;
  }

  void delete_val(int data, node*& head) {
    if(head->data == data) {
      node* temp = head;
      head = head->next;
      delete temp;
    }
    node* current = head;
    while (current->next != nullptr && current->next->data != data) {
      current = current->next;
    };
    if (current->next != nullptr) {
      node* temp = current->next;
      current->next = current->next->next;
      delete temp;
    }
  }
};

static node* kArray[ksize];

class Hashmap {
  node **map = kArray;
public:
  void insert(int in) {
    int pos = (in % kprime) % ksize;
    insert(in, *map[pos]);       
  }
};
