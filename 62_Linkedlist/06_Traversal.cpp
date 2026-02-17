// Travesal in Linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};


void Traversal(Node* ptr){
    while (ptr != NULL) // STEP 2 : while( ptr !=null ) ==  while( ptr->next !=null ) 
    {
        cout << "Data : " << ptr->data << endl; 
        ptr = ptr->next; // STEP 1 : (ptr) become (ptr->next)
    }
}

int main(){
    Node* FirstNode = new Node;
    Node* SecondNode = new Node;
    Node* ThirdNode = new Node;

    FirstNode->data = 23;
    FirstNode->next = SecondNode;

    SecondNode->data= 34;
    SecondNode->next = ThirdNode;

    ThirdNode->data= 99;
    ThirdNode->next = NULL;

    Traversal(FirstNode);
    cout << "" << FirstNode << endl;
    cout << "" << SecondNode << endl;
    cout << "" << ThirdNode << endl;
    
    return 0;
}