// InOrder Traversal : in this we first print Left, then Right, then ROOT

// Input : 
//              1
//             / \
//            2   3
//               / \
//              4   5

// Output : 2, 4, 5, 3, 1

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


// PostOrder Traversal
void postOrderTraversal(Node* root){
    if (root==NULL) return;

    postOrderTraversal(root->left); // First : Left
    postOrderTraversal(root->right); // Second : Right
    cout << root->data << " ";    // Third : Root
}

int main(){
    int PreOrder_Sequence[]= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = createTree(PreOrder_Sequence); 
    postOrderTraversal(root);
    
    return 0;
}