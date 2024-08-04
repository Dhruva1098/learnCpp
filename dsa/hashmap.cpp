#include <iostream>
const int ksize = 10000;
const int kprime = 100006;

struct node {
  int data;
  node* next;
  node(int data) : data(data) , next(nullptr) {}
};

class LL {
public:

  void insert(int data, node*& head) {
    node* temp = new node(data);
    temp->next = head;
    head = temp;
  }

  bool find_val(int data, node*& head) {
    node* current = head;
    while (current != nullptr) {
      if (current->data == data) {
        return true;
      }
      current = current->next;
    } return false;
  }

  void delete_val(int data, node*& head) {
    if(head == nullptr) return;
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
  LL L;
public:
  void map_insert(int in) {
    int pos = (in % kprime) % ksize;
    L.insert(in, map[pos]);       
  }

  bool map_find(int in) {
    int pos = (in % kprime) % ksize;
    return L.find_val(in, map[pos]);
  }
  void map_delete(int in) {
    int pos = (in % kprime) % ksize;
    L.delete_val(in, map[pos]);
  }
};

int main() {
  Hashmap map;
  for (int i = 0; i < ksize; i++) {
     kArray[i] = nullptr;
     }
  map.map_insert(42);
  map.map_insert(188);
  map.map_insert(11);
  map.map_delete(108);
  std::cout << map.map_find(42) << " " << map.map_find(108) << " " << map.map_find(11) << std::endl;
}
