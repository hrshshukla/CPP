// Using Constructor and Destructure 
#include <iostream>
using namespace std;

class Stack{
 private:
    int size;
    int* arrPointer;
    int top;
    
 public:

// Constructor
    Stack(int sizeInput){
        top = -1; 
        size = sizeInput;
        arrPointer = new int[size];
    }

// Destructor
    ~Stack(){
        delete[] arrPointer; // del
    }

    bool isFull(){
      return (top == size-1); // if stack full then return 1, else return 0;
    }

    bool isEmpty(){
      return (top == -1); // if stack empty then return 1, else return 0;
    }

    void push(int value){
        if (isFull()){
            cout << "Stack is Overflow! cannot push: " << value << endl;
            return;
        }
        arrPointer [++top] = value; // ++top : pre increment
    }

    void pop(){
        if (isEmpty())
        {
            cout << "Stack is Empty (Underflow)"  << endl;
            return;
        }
        --top; // update top to 2nd last value
    }

    void print(){
        if (isEmpty()) return; // Stack is Empty

        for (int i = top; i >= 0 ; i--)
        {
            cout<< "| " << arrPointer[i] << " |" << endl;
        }
        cout << endl;
    }

    void peek(){
        if (isEmpty()) return;
        cout<< arrPointer[top];
    }

    void stackBottom(){
        if (isEmpty()) return;
        cout<< arrPointer[0];
    }

    void clear(){
        delete[] arrPointer; // deleting whole stack
    }
};



int main(){
    Stack stackOne(2); // stackOne(size);
    stackOne.push(40);
    stackOne.push(60);
    stackOne.push(90);
    stackOne.print();
    stackOne.peek();
    
    return 0;
}