// Linked-List using Class in [Static memory] instead of [dynamic] (heap)

#include <iostream>
using namespace std;

class Node
{
    public :

    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};


int main(){
    Node First(20);
    Node Second(30);
    Node Third(40);

    First.data = 23;
    First.next = &Second;

    Second.data= 34;
    Second.next = &Third;

    Third.data= 99;
    Third.next = NULL;  

    return 0;
}