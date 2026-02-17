// Linked-List  using struct [Heap/Dynamic Memory]

// -- when we create a variable using (new) keyword then a memory address is returned which can be stored in pointer 
// Example : Node* First = new Node;
//           Node* First = 0xf66e80

// -- NULL to nullptr (implicitly)

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};


int main(){
    Node* First = new Node;
    Node* Second = new Node;
    Node* Third = new Node;

    First->data = 23;
    First->next = Second;

    Second->data= 34;
    Second->next = Third;

    Third->data= 99;
    Third->next = NULL;  // NULL --> Integer type value (which is 0) converted into : nullptr (implicitly)


// Now, chaining : 
//       (First->next) = Second 
//       First->next->next = Third
//            Second->next = Third


    return 0;
}