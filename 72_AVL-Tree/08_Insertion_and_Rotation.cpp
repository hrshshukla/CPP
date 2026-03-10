// Formula : 
// -> Height => 1 + max( height of left node, height of right node) 
// -> Balanced Factor =>  height(left subtree) - height(right subtree) 

// Tip :
//  Balanced factor should be [-1, 0, 1] -------->  -1 <= Balanced factor <= 1
// -> when left sub-tree start getting heavier, then the balanced factor of root node moves towards positive /right direction
// -> when right sub-tree start getting heavier, then the balanced factor of root node moves towards negative /left direction

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

// To get the height of a particular node 
int getHeight(Node* node){
    if (node == NULL)   return 0;

    return node->height;
}

// To get the balanced factor of a particular node 
int getBalancedFactor(Node* node){
    if (node== NULL) return 0;

    return getHeight(node->left) - getHeight(node->right);
}


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

// Step 1: (60sec) -> https://youtube.com/clip/UgkxTNm-45Sk57cEUHR2HvBWNLln-MX79Hie?si=KjevL_M6Sm6e7cZw
// Tip : currentRoot concept 
Node* insert(Node* root, int inputValue){
    // when tree will hit the leaf node
    if (root == NULL)
    {
        Node* newNode = new Node(inputValue);
        return newNode;
    }

    // if the nodes already present in tree 
    else if (inputValue < root->data)
        root->left = insert(root->left, inputValue);

    else if (inputValue > root->data)
        root->right = insert(root->right, inputValue);

    // update the height of the tree 
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // get balanced factor 
    int BF = getBalancedFactor(root);
    
    // Problem -> Left Left situation |  Solution -> Right rotation   
    if(BF > 1 && inputValue < root->left->data ){
        return rightRotate(root);
    }

    // Problem -> Left Right situation | Solution -> Left-Right rotate
    if(BF > 1 && inputValue > root->left->data ){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Problem -> Right Left situation |  Solution -> Left rotation   
    if(BF < -1 && inputValue < root->right->data ){
        root->right= rightRotate(root->right);
        return leftRotate(root);
    }
    
    // Problem -> Right Right situation |  Solution -> Left rotation   
    if(BF < -1 && inputValue > root->right->data ){
        return leftRotate(root);
    }

    return root;
}


// PreOrder Traversal 
void preOrderTraversal(Node* root, int newLevel = 0){
    
    if(root == NULL) return; // to stop the recursion as we hit NULL value in end of tree  

    for (int i = 0; i < newLevel; ++i)
    {
        cout << "   ";
    }
    

    cout << root->data << "," << endl; // First : Root
    preOrderTraversal(root->left, newLevel + 1); // Second : left
    preOrderTraversal(root->right, newLevel + 1); // Third : right
}



int main(){

    int PreOrder_array[]= {    //      Tree:
        20,                    //        20
            10,                //       /  \ 
                5, -1, -1,     //     10    25
                15, -1, -1,    //    /  \ 
            25, -1, -1,        //   5   15
    };

    
    Node* root = createTree(PreOrder_array);
    preOrderTraversal(root); // Old Root 
    cout << endl;
    
    // ❌ Wrong : Not capturing the updated root returned by insert() 
    // insert(root, 43); -> this fuction inserts newNode(43) but also rotates the tree,
    //                      So other node will now take the place of root node
    
    // ✅ Correct : Capturing new root 
    root = insert(root, 2);

    // Ouput :  after insering (2)
    //        10
    //       /   \
    //      5     20
    //     /     /  \
    //    2     15  25

    
    preOrderTraversal(root);
    return 0;
}