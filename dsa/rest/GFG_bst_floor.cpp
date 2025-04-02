class Solution{

public:
    int floor(Node* root, int x) {
        int f = -1;
        while(root){
            if(root->data == x) return root->data;
            else if(x<root->data){
                root = root->left;
            } else {
                f = root->data;
                root = root->right;
            }
        } return f;
    }
};
