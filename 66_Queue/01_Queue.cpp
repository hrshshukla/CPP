// Queue using Array : FIFO

#include <iostream>
using namespace std;

class Queue{
 public:
     int size;
     int front, rear;
     int *arr;

    Queue(int inputSize){
        size = inputSize;
        front = rear = -1;
        arr = new int[size];
    }

    bool isEmpty(){
        return (rear == front);
    }

    bool isFull(){
        return (rear == size-1);
    }

    void enQueue(int value){
        if (isFull())
        {
            cout << "Queue is full";
            return;
        }
        arr[++rear] = value;
    }

    int deQueue(){
        if (isEmpty()) {
            cout <<"Queue is empty" << endl;
            return;
        }
        return arr[++front];
    }

    ~Queue(){
        delete[] arr;
    }
};

int main(){
    Queue queue1(2);

    queue1.enQueue(24);
    queue1.enQueue(39);

    cout << "Deque " << queue1.deQueue() << endl;
    cout << "Deque " << queue1.deQueue() << endl;
    cout << "Deque " << queue1.deQueue() << endl;

    //Output : 
    // Deque 24
    // Deque 39
    // Queue is empty
    // Deque 0

    return 0;
}