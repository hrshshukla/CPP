// InOrder Traversal : in this we first print Left, then ROOT, then Right

// Input : 
//              1
//             / \
//            2   3
//               / \
//              4   5

// Output : 2, 1, 4, 3, 5

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


// Inorder Traversal
void inOrderTraversal(Node* root){
    if (root==NULL) return;

    inOrderTraversal(root->left); // First : Left
    cout << root->data << " ";    // Second : Root
    inOrderTraversal(root->right); // Third : Right
}
int main(){
    int PreOrder_Sequence[]= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = createTree(PreOrder_Sequence); 
    inOrderTraversal(root);
    
    return 0;
}