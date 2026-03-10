// (Must Watch) All possible cases with diagram in 4 min : https://youtu.be/hL9RUD33nYs

//         10  <--------- Predecessor of 10 = 7, Successor of 10 = 12
//       /    \ 
//      5     15
//     / \     / 
//    3   7   12  

// -- Inorder Predecessor: Ek node ka predecessor uska left subtree ka rightmost node hota hai.
// -- Inorder Successor: Ek node ka successor uska right subtree ka leftmost node hota hai.

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

// Create tree 
static int index = -1;
Node* createTree(int preOrder[]){
    index++;

    if (preOrder[index] == -1) return NULL; 

    Node* root = new Node(preOrder[index]);
    root->left = createTree(preOrder);
    root->right = createTree(preOrder);

    return root;
}

// InOrder Predecessor 
Node* InOrderPredecessor(Node* root){
    // Step 1: Come down to left child of the root 
    root = root->left;

    // Step 2 : Keep moving at right side until you reach leaf node
    while (root->right != NULL) 
    {
        root = root->right;
    }

    return root; // return that leaf node 
}

// Deletion in binary search tree
Node* deleteNode(Node* root, int inputValue){
    Node* InOrdrPredssor; 

    // Base Case
    if (root == NULL) return NULL;
    else if (root->left == NULL &&  root->right == NULL) // if it is a leaf node then delete directly 
    {
        delete(root);
        return NULL;
    }

    // search for the node to be deleted, in right and left subtree (recursively) 
    if (inputValue < root->data)
    {
        root->left = deleteNode(root->left, inputValue); // the node returned form this, will become the left child of the current root 
    }
    else if (inputValue > root->data)
    {
        root->right = deleteNode(root->right, inputValue);
    }

    // Once the node is found having inputValue, we will delete it
    else if (inputValue == root->data)
    {
        InOrdrPredssor = InOrderPredecessor(root); // pass that Node as root and get it's Inorder predecessor 
        root->data = InOrdrPredssor->data; // swap the value of root with its Inorder predecessor value 
        root->left = deleteNode(root->left, InOrdrPredssor->data); // Now delete the Inorder predecessor node
    }

    return root;
}

int main(){

    
    int PreOrder_Sequence[] = {           
        50,                               
        30,                               
            20, -1, -1,                   
            40, -1, -1,                   
        70,
            60, -1, -1,
            80, -1, -1
    };

      
    Node* root = createTree(PreOrder_Sequence);

    cout << root->right->data << endl;
    deleteNode(root, 70);
    cout << root->right->data << endl;
    
    return 0;
}