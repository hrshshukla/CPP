#include <iostream>
using namespace std;

class Node{   
 public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

// Create tree function with recursion
static int index = -1;
Node* createTree(int preOrder[]){
    index++;

    if (preOrder[index] == -1) return NULL; // as we hit (node : -1) is (node : NULL)

    Node* root = new Node(preOrder[index]);
    root->left = createTree(preOrder);
    root->right = createTree(preOrder);

    return root;
}

int main(){

    int PreOrder_array[]= {24, 23, -1, -1, 45, 44, -1, -1, -1, -1};
    
    Node* root = createTree(PreOrder_array);
    cout << root->data << endl;

    return 0;
}