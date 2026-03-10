#include <iostream>
using namespace std;

class Node{   
 public:
    int data;
    Node* left;
    Node* right;
    int height; // to keep track of height of every node

    Node(int data){
        this->data = data;
        left = right = NULL;
        height = 1; // Every new node that is inserted, brings height of +1
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

// To get the height of a particular node 
int getHeight(Node* node){
    if (node == NULL)   return 0;

    return node->height;
}

Node* rightRotate(Node* y){ //-> follow the [03_left_rotation.png]
    // creating pointers to target the nodes 
    Node* x = y->left;
    Node* T2 = x->right;

    // rotating position of nodes
    x->right = y;
    y->left = T2;

    // updating new height of nodes 
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    // after the rotating we will get new root nodes, so returning new root node
    return x;
}

Node* leftRotate(Node* x){ //-> follow the [04_right_rotation.png]
    // creating pointer to target nodes 
    Node* y = x->right;
    Node* T2 = y->left;

    // rotating position of nodes
    y->left = x;
    x->right = T2;

    // updating new height of nodes 
    x->height = 1 + max( getHeight(x->left), getHeight(x->right));
    y->height = 1 + max( getHeight(y->left), getHeight(y->right));

    // after the rotating we will get new root nodes, so returning new root node
    return y;
}


int main(){

    int PreOrder_array[]= {    //      Tree:
        20,                    //        20
            10,                //       /  \ 
                5, -1, -1,     //     10    25
                15, -1, -1,    //    /  \ 
            25, -1, -1,        //  5   15
    };

    
    Node* root = createTree(PreOrder_array);
    cout << endl;
    
    
    return 0;
}