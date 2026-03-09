// In level order traversal we visit nodes level by level 
// we will be using Queue for this method : #include <queue>

// Input : 
//              1
//             / \
//            2   3
//               / \
//              4   5

// Output : 1, 2, 3, 4, 5

#include <iostream>
#include <queue>
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


// levelOrder Traversal
void levelOrderTraversal(Node* root){

    queue<Node*> Q; // Create a Queue
    Q.push(root); // STEP 1 : Pushing root into the Queue

    while (Q.size() > 0)
    {
        Node* currRoot = Q.front(); // so that we dont lost it address, as we are going to pop() it
        Q.pop();

        cout << currRoot->data << " ";

        // Push right and left node in the Queue
        if (currRoot->left != NULL)
        {
            Q.push(currRoot->left);
        }
        
        if (currRoot->right != NULL)
        {
            Q.push(currRoot->right);
        }
    }
}

int main(){
    int PreOrder_Sequence[]= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = createTree(PreOrder_Sequence); 
    levelOrderTraversal(root);
    
    return 0;
}