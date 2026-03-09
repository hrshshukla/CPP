// In level order traversal we visit nodes level by level 
// we will be using Queue for this method : #include <queue>

// Input : 
//              1
//             / \
//            2   3
//               / \
//              4   5

// Output : 1
//          2, 3
//          4, 5

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

    queue<Node*> Q;
    Q.push(root); // STEP 1 : Pushing root into the Queue
    Q.push(NULL); // STEP 2 : Pushing NULL, it will act as a trigger and tell us when the levels are changing and we need to change line  
    
    
    
    
    
    while (Q.size() > 0)
    {
        Node* currRoot = Q.front(); 
        Q.pop();
        
        // Now there will be two type of NULL, (1) which we push in Queue (2) which came from the tree nodes aka NULL nodes 
        // to tackle this we use this code 
        if (currRoot == NULL)
        {
            if (!Q.empty()) // if Queue is not empty and we are getting a NULL value in Queue, means it's a trigger for changing line
            {
                cout << endl;
                Q.push(NULL); // Again push NULL in Queue, so we get NULL again when the level changes
                continue; // code below this line doesn't makes sense for a NULL value, so skip this iteration and move to next
            }
            else
            {
                break; // runs when Queue is empty and NULL value hits, hence no value is left in queue so end the loop; we're done!!
            }
        }

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