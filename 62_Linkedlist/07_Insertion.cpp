// Insertion in Linked list 
//-- Insertion in FRONT
//-- Insertion in BETWEEN
//-- Insertion in BACK

#include <iostream>
using namespace std;

class Node{
 public:  

    int data; 
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL; 
    }
};

class List{
    Node* head;
    Node* tail;

 public:
    List(){
        head = tail = NULL;
    }

    void Traversal(){
        Node* temp = head;

        while (temp != NULL) // STEP 2 : while( temp !=null ) ==  while( temp->next !=null ) 
        {
            cout << "Data : " << temp->data << endl; 
            temp = temp->next; // STEP 1 : (temp) becomes (temp->next)
        }
        cout << "NULL" << endl;
    }

    void pushFront(int value){
        Node* newNodePointer = new Node(value);
        
        if(head == NULL){                    // if No Nodes in the list then, 
            head = tail = newNodePointer;    // newNodePointer will be head and tail of the list
        }
        else{
            newNodePointer->next = head;   // newNodePointer will point to first node stored in --> head
            head = newNodePointer;         // And it will become first node [head] of the list
        }
    }

    void insert(int value, int position){  // Insert Node anywhere between the list 
        if(position < 0){
            cout << "Invalid Position" << endl;
            return;
        }
        else if (position == 0){ // User wants to insert new node in FRONT position
            pushFront(value);
            return;
        }
        
        Node* newNodePointer = new Node(value);

        Node* temp = head;
        for (int i = 0; i < position-1; i++){ // if : position = 3 then, List index 2 
            temp = temp->next;              // ((temp->next)->next) = Third Node
        }

        newNodePointer->next = temp->next; 
        temp->next = newNodePointer;
    }
};

int main(){
    List list1;
    list1.pushFront(30);
    list1.pushFront(20);
    list1.pushFront(10);

    list1.insert(99,0);
    list1.Traversal();
    return 0;
}