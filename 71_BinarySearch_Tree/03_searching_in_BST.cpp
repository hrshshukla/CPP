// We will search value in BST using binary search appreach and recursion
// if the (InputValue) is smaller than value of (current root) then search in right sub-tree
// if the (InputValue) is bigger than value of (current root) then search in left sub-tree

// Pro tip : delcare the PreOder_Sequence array like this :

//    # Array :                         | #Tree :
//    int PreOrder_Sequence[] = {       |         50
//        50,                           |        /  \
//        30,                           |      30    70
//            20, -1, -1,               |     / \    / \
//            40, -1, -1,               |   20  40  60  80
//        70,                           |
//            60, -1, -1,               |    
//            80, -1, -1                |    
//    };                                |    



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

// Searching in binary search tree -- recursive approach
int search(Node* root, int InputValue){
    if (root==NULL) return 0; 

    if (root->data == InputValue) return root->data;

    // search in right sub-tree
    if (InputValue < root->data )
    {
        return search(root->left, InputValue);
    }

    // search in left sub-tree
    else{
        return search(root->right, InputValue);
    }
}

int main(){

    // Array                              // Tree :
    int PreOrder_Sequence[] = {           //         50
        50,                               //        /  \
        30,                               //      30    70
            20, -1, -1,                   //     / \    / \
            40, -1, -1,                   //   20  40  60  80
        70,
            60, -1, -1,
            80, -1, -1
    };

      
    Node* root = createTree(PreOrder_Sequence);

    // searching 20 in tree 
    int result = search(root, 80);
    result ? cout <<"Found :" << result : cout << "Not Found" ;

    return 0;
}