/* now we will implement getIndex()                        

array : [ 10 | 20 | 30 | 40 ]
                
getIndex(0) --> | 40 | <-- arr[3] <-- top
getIndex(1) --> | 30 | <-- arr[2]
getIndex(2) --> | 20 | <-- arr[1]
getIndex(3) --> | 10 | <-- arr[0]   

Formula : return (top - indexInput);
example : top = 3 and getIndex(2) = return arr[1]                                                       */

#include <iostream>
using namespace std;

class Stack{
 private:
    int size;
    int top;
    int* arrPointer;

 public:

    int getIndex(int indexInput){
        if (indexInput < 0) return;
        return top - indexInput;
    }
};


int main(){
    Stack stackOne; 
    return 0;
}