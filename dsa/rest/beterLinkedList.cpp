#include <iostream>

class Node; class List;//forward declaration
class Iterator { //this is iterator class which iterates through our linked list. good code practice
	Node* node;
	List* list;
public:
	Iterator(): node(0), list(0) {}
	void begin(List* l);
	bool end();
	void next();
	int data();
};
class List {
	Node* head;
	Node* tail;
public:
	List(Node* h = 0) : head(h), tail(h) {}
	void append(Node *p);

	friend class Iterator;
};

class Node {
	int data;
	Node* next;
public:
	Node(int i): data(i), next(0) {}
	friend class List;
	friend class Iterator;
};

void Iterator::begin(List* l) {
	list = l; node = l->head; //init our itereator with the list
}

int Iterator::data() { return node->data; }
void Iterator::next() { node = node->next; }
bool Iterator::end() { return node == 0; } //checks if we are on the end of the list

void List::append(Node* p) {
	if (!head) head = tail = p;
	else {
		tail->next = p;
		tail = tail->next;
	}
}

int main() {
	List l;
	Node n1(1), n2(2), n3(3);
	l.append(&n1);
	l.append(&n2);
	l.append(&n3);
	Iterator i;
	for (i.begin(&l); !i.end(); i.next()) { //see this is impressive and better implementation 
		std::cout << i.data() << " ";
	}

}