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

class Queue{
public:
    Node* head, *tail;
    int size;
    int count = 0;

    Queue(int inputSize){
        size = inputSize;
        head = tail = NULL;
    }

    bool isEmpty(){
        return (count == 0);
    }

    bool isFull(){
        return (count == size);
    }

    int dequeue(){
        if (isEmpty()){
            cout<< "Queue is empty";
            return 0;
        }
        Node* temp = head;
        int value = head->data;

        head = head->next;

        delete temp;
        count--;
        return value;
    }
    
    void enqueue(int value){ // (i) With tail : O(1)   (ii) Without tail --> O(n)
        if (isFull())
        {
            cout << "Queue is full" << endl;    
            return;
        }
        Node* newNodePointer = new Node(value);
        if (head == NULL){
            head = tail = newNodePointer;
        }
        else{
            tail->next = newNodePointer;
            tail = newNodePointer;
        }
        count++;
    }

    
    void print(){
        Node* temp = head;
        cout << "| ";
        while (temp != NULL)
        {
            cout<< temp->data << " | ";
            temp = temp->next;
        }
    }

};


int main(){
    Queue q1(3);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(40);
    q1.print();
};
