// how different from normal queue?
//          Normal Queue (linear)        |   Circular Queue
//          Need linear increment        |   Need circular inscrement : i = (i+1) % arrSize
//                                       |   Change in : isFull() --> using (count)
//  


#include <iostream>
using namespace std;

class Queue{
 public:
     int size;
     int front, rear, count;
     int *arr;

    Queue(int inputSize){
        size = inputSize;
        rear = front = 0; // if we set front = -1, this formula will always give (rear+1 % size == front) => (0 == 1) FALSE and Queue will never full. 
        count = 0; // Used to tell when queue is full or empty 
        arr = new int[size];
    }

    bool isEmpty(){
        return (count == 0);
    }

    bool isFull(){
        // New formula for isFull()
        return (count == size); 
    } 

    void enQueue(int value){
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else
        {
            rear = (rear+1)% size; // circular increment : i = (i+1) % arrSize 
            count++;
            arr[rear] = value;
        }
    }

    int deQueue(){
        if (isEmpty()) {
            cout <<"Queue is empty" << endl;
            return -1;
        }
        else
        {
            front = (front+1)%size; // circular increment 
            return arr[front];
        }
        count-- ;
        return -1;
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
    
        int temp = front;
        int printed = 0;
    
        while (printed < count) {
            cout << arr[temp] << endl;
            temp = (temp + 1) % size;
            printed++;
        }
    }
    

    ~Queue(){
        delete[] arr;
    }
};

int main(){
    Queue queue1(2);

    queue1.enQueue(1);
    queue1.enQueue(2);
    
    queue1.enQueue(2);
    
    
    queue1.print();


    return 0;
}