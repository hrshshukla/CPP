#include <iostream>
using namespace std;

class Node{
 public:
     int data;
     Node* previous;
     Node* next;
   
     Node(int value){
       data = value;
       next = previous = NULL;
     }
};

class DublyLinkedList{
 public:
    Node* head, *tail;

    DublyLinkedList(){
        head = tail = NULL;
    }

    void pushFront(int value){
        Node* newNodePointer = new Node(value);
        if (head == NULL){
            head = tail = newNodePointer;
            return;
        }
        newNodePointer->next = head;
        head->previous = newNodePointer;
        head = newNodePointer;
    }

    void pushBack(int value){
        Node* newNodePointer = new Node(value);
        if (head == NULL){
            head = tail = NULL;
            return;
        }
        newNodePointer->previous = tail;
        tail->next = newNodePointer;
        tail = newNodePointer;
    }

    void pushInBetween(int value, int position){
        Node* newNodePointer = new Node(value);
        if (position < 0){
            cout << "Invalid Position" << endl;
            return;
        }
        if (position == 0) 
        {
            pushFront(value);
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position-1; i++)
        {
            temp = temp->next;
        }
        Node* nodeAfterTemp = temp->next;
        newNodePointer->next = nodeAfterTemp;
        nodeAfterTemp->previous = newNodePointer;

        temp->next = newNodePointer;
        newNodePointer->previous = temp;
    }

    void popInBetween(int position){
        if (position < 0){
            cout << "Invalid Position" << endl;
            return;
        }
        if (position == 0) 
        {
            popFront();
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position-1; i++)
        {
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        (toDelete->next)->previous = temp;
        delete toDelete;
    }

    void popFront(){
        if (head == NULL){
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        
        Node* toDelete = head;
        head = head->next;
        head->previous = NULL;
        delete toDelete;
    }

    void popBack(){
        if (head == NULL) return;
        if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* toDelete = tail;
        tail = tail->previous;
        tail->next = NULL;
        delete toDelete;
    }


    void print(){
        Node *temp = head;
        cout << "NULL <=> ";
        while (temp != NULL)
        {
            cout << temp->data << " <=> " ;
            temp= temp->next;
        }
        cout << "NULL" << endl;
    }
  
};


int main(){
    DublyLinkedList list1;
    
    list1.pushFront(20);
    list1.pushFront(40);
    list1.pushFront(70);
    list1.pushBack(99);
    list1.pushInBetween(100,2);
    list1.popInBetween(2);

    list1.print();

    return 0;
}