// Old tree :                                           New tree :                 
//          50                                             50
//        /    \                                         /    \
//      30      70    -----------> Insert(56) -------> 30      70
//     /  \    /  \                                    /  \    /  \
//   20   40  60   80                                20   40  60   80
//                                                           /
//                                                          56


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

// Insertion in binary search tree
void insert(Node* root, int inputValue){
    Node* previousNode; 

    while (root!=NULL)  
    {
        previousNode = root; // will store the new updated root everytime 

        if (root->data == inputValue){
            cout << inputValue << " Already in tree";
            return; 
        }

        else if (inputValue < root->data)
            root = root->left;
        else
            root = root->right;
    }

    // Creating the node 
    Node* newNode = new Node(inputValue); 
    
    // Linking the newNode to its appropriate location 
    Node* temp;
    if (inputValue < previousNode->data)             
    {
        previousNode->left = newNode;
    }
    else{
        previousNode->right = newNode;
    }
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
    insert(root, 56);

    
    return 0;
}