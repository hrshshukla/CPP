// Forward circular steps :  (i + 1) % size
// Backward circular steps : (i - 1 + size) % size 

// Example : [Array size = 5, last index = 4], front = 0 
// -- (i + 1) % size        -->  (front + 1) % 5      -->  (0 + 1) % 5   --> 1 % 5 = 1 ----> front moved forward from index [0] to index [1]  
// -- (i - 1 + size) % size -->  (front - 1 + 5) % 5  -->  (-1 + 5) % 5  --> 4 % 5 = 4 ----> front moved backward from index [0] to index [4] <-- last index 

#include <iostream>
using namespace std;

class DEQueue {
public:
    int size;
    int front, rear, count;
    int* arr;

    DEQueue(int inputSize) {
        size = inputSize;
        front = rear = 0;
        count = 0;
        arr = new int[size];
    }

    bool isEmpty() {
        return (count == 0);
    }

    bool isFull() {
        return (count == size);
    }

    // Insert at front
    void enqueueFront(int value) {
        if (isFull()) {
            cout << "DEQueue is full\n";
            return;
        }
        front = (front - 1 + size) % size; 
        arr[front] = value;
        count++;
    }

    // Insert at rear
    void enqueueRear(int value) {
        if (isFull()) {
            cout << "DEQueue is full\n";
            return;
        }
        arr[rear] = value;
        rear = (rear + 1) % size;
        count++;
    }

    
    // Delete from front
    void dequeueFront() {
        if (isEmpty()) {
            cout << "DEQueue is empty\n";
            return;
        }
        cout << "Deleted from front: " << arr[front] << endl;
        front = (front + 1) % size; 
        count--;
    }

    // Delete from rear
    void dequeueRear() {
        if (isEmpty()) {
            cout << "DEQueue is empty\n";
            return;
        }
        rear = (rear - 1 + size) % size; 
        cout << "Deleted from rear: " << arr[rear] << endl;
        count--;
    }

    void print() {
        if (isEmpty()) {
            cout << "DEQueue is empty\n";
            return;
        }

        int temp = front;
        cout << "DEQueue elements: ";
        for (int i = 0; i < count; i++) {
            cout << arr[temp] << " ";
            temp = (temp + 1) % size;
        }
        cout << endl;
    }

    ~DEQueue() {
        delete[] arr;
    }
};

int main() {
    DEQueue dq(5);

    dq.enqueueRear(10);
    dq.enqueueRear(20);
    dq.enqueueFront(5);
    dq.enqueueFront(1);
    dq.enqueueFront(99);
    dq.print();   //  99 1 5 10 20

    
    dq.dequeueFront();
    dq.dequeueFront();
    dq.dequeueFront();
    dq.dequeueFront();
    dq.dequeueFront();
    
    dq.print();   //  No Value Left

    return 0;
}
