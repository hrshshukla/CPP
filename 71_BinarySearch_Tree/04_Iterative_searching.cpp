// Previously we have implemented searching with recursion approach 
// Now we will do it with iterative

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

// Searching in binary search tree -- iterative approach
int search(Node* root, int InputValue){

    // Loop will run again n again with new root 
    while (root != NULL) // run until we get the leaf node
    {
        if (root->data == InputValue) return root->data;

        if (InputValue < root->data )
        {
            root = root->left; // new root will be right node
        }
        
        else{
            root = root->right; // new root will be right node 
        }
    }

    return 0; // if element not found then at the end return NULL;
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

    
    int result = search(root, 99);
    result ? cout <<"Found :" << result : cout << "Not Found" ;

    return 0;
}