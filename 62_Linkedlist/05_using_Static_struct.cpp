// Linked-List using [STATIC memory] instead of dynamic (heap)

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};


int main(){
    Node First, Second, Third;

    First.data = 23;
    First.next = &Second;

    Second.data= 34;
    Second.next = &Third;

    Third.data= 99;
    Third.next = NULL;  

    return 0;
}