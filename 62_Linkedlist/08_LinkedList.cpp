// We only need to update the [tail] when we pushBack/popBack because, 
//  In other cases (like : pusFront, pushInBetween, popInBetween) the tail will remain in same address 

#include <iostream>
using namespace std;

class Node{
 public:
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = NULL;
  }

};

class linkedList{
public:
    Node* head, *tail;

    linkedList(){
        head = tail = NULL;
    }

    void pushFront(int value){
        Node* newNodePointer = new Node(value);
        if (head == NULL){
            head = tail = newNodePointer;
            return;
        }
        newNodePointer->next = head;
        head = newNodePointer;
    }
    
    void pushBack(int value){ // (i) With tail : O(1)   (ii) Without tail --> O(n)
        Node* newNodePointer = new Node(value);

        if (head == NULL){
            head = tail = newNodePointer;
        }
        else{
            tail->next = newNodePointer;
            tail = newNodePointer;
        }
    }

    void pushInBetween(int value, int position){
        if (position < 0){
            cout<<"Invalid Position";
            return;
        }
        else if (position == 0){
            pushFront(value);
            return;
        }

        Node* newNodePointer = new Node(value);
        
        Node* temp = head;
        for (int i = 0; i < position-1; i++){
            temp = temp->next;  
        }
        newNodePointer->next = temp->next;
        temp->next = newNodePointer;
    }

    void popFront(){
        if (head == NULL){
            cout<< "No element in the List";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    void popInBetween(int position){
        if (position < 0){
            cout<<"Invalid Position";
            return;
        }
        else if (position == 0){
            popFront();
            return;
        }
        Node* temp = head;
        for (int i = 0; i < position-1; i++){
            temp = temp->next;  
        }
        Node* toDelete = temp->next; // targetNode = Node to be deleted
        temp->next = (toDelete)->next;
        delete toDelete;
    }

    void popBack(){
        if (head == NULL){
            cout<< "No element in the List";
            return;
        }
        Node* temp = head;
        while (temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void print(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<< temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};


int main(){
    linkedList list1;
    list1.pushFront(50);
    list1.pushFront(40);
    list1.pushFront(30);
    list1.pushFront(20);
    list1.pushFront(10);

    
    list1.popFront();
    list1.popBack();
    list1.popInBetween(1);
    
    list1.pushBack(99);
    list1.pushInBetween(75,2);
    
    list1.print();

    return 0;
}