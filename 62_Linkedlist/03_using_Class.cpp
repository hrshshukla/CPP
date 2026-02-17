// Linked List using Class [Heap/Dynamic Memory]

#include <iostream>
using namespace std;

class Node{
 public:  

    int data; 
    Node *next;

    Node(int val)//constructor 
    {
        data = val;
        next = NULL; // default value 
    }
};

int main(){
    Node* First = new Node(20); //   First->data = 20
    Node* Second = new Node(30); // Second->data = 30
    Node* Third = new Node(40); //   Third->data = 40

    First->data = 23; // overwritng 
    First->next = Second;

    Second->data= 34;
    Second->next = Third;

    Third->data= 99;
    Third->next = NULL;
    return 0;
}