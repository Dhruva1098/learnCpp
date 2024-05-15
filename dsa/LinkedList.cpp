#include <iostream>

class LinkedList {
	struct node {
		int data;
		node* next;
	};
	node* head=NULL;
public:
	LinkedList(int arr[], int size) {
		for (int i = 0; i < size; i++) {
			this->addItemEnd(arr[i]);
		}
	}
	~LinkedList() { while (head != NULL) {
		deleteLast();}
		std::cout << "dtor" << std::endl;
	}
	node* deleteLast() {
		if (head == NULL) {
			return head;
		}
		else if (head->next == NULL) {
			delete head->next;
			head = NULL;
			return head;
		}
		node* ptr = head;
		while (ptr->next->next != NULL) {
			ptr = ptr->next;
		}
		delete ptr->next;
		ptr->next = NULL;
		return head;
	}
	int midElement() {
		if (head == NULL) { std::cout << "no element present"; }
		node* slow = head;
		node* fast = head;
		while (fast != NULL && fast->next != NULL && fast->next->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow->data;
	}
	node* addItemEnd(int item) {
		node* temp = new node();
		if (temp == NULL) { std::cout << "heap memory is full" << std::endl; return NULL; }
		temp->next = NULL;
		temp->data = item;
		if (head == NULL) {
			head = temp;
		}
		else {
			node* ptr = head;
			while (ptr->next != NULL) { ptr = ptr->next; }
			ptr->next = temp;
		}return head;
		}
	
	void printLinkedList(node* head){
		node* ptr = head;
		while (ptr->next != NULL) { std::cout << ptr->data << "->"; ptr = ptr->next; }
		std::cout << ptr->data << std::endl;
	}
	void printLinkedList() {
		node* ptr = head;
		while (ptr->next != NULL) { std::cout << ptr->data << "->"; ptr = ptr->next; }
		std::cout << ptr->data << std::endl;
	}
};

int main() {
	int arr[] = { 1,2,3,3,5,4,3,2,1 };
	LinkedList ll(arr,9);
	std::cout << ll.midElement();
}



