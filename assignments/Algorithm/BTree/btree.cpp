#include <iostream>
struct node {
  int data;
  struct node *lc, *rc;
  node(int v)
  {
    data = v;
    lc = rc = NULL;
  }
};

void visit(node* node){
  std::cout << node->data << " ";
}

void preorder(node* node){
  if(node) {
    visit(node);
    preorder(node->lc);
    preorder(node->rc);
  }
}

void inorder(node* node){
  if(node){
    inorder(node->lc);
    visit(node);
    inorder(node->rc);
  }
}

void postorder(node* node){
  if(node){
    postorder(node->lc);    postorder(node->rc);
    visit(node);
  }
}

int main(){
  node* root = new node(1);
  root->lc = new node(2);
  root->lc->rc = new node(4);
  root->lc->rc->lc = new node(6);
  root->lc->rc->rc = new node(7);
  root->rc = new node(3);
  root->rc->lc = new node(5);
  root->rc->lc->rc = new node(8);
  preorder(root); std::cout << " \n";
  inorder(root); std::cout << " \n";
  postorder(root);
}
