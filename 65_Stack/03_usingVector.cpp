// Stack : LIFO   |   Queue : FIFO
// Implementing STACk using vector --->  #include <vector>

#include <iostream>
#include <vector>
using namespace std;

class Stack{
  vector <int> vec;
  public:
  
  bool isEmpty(){ // O(1)
    return vec.size() == 0;
  }

  bool isFull(){ // O(1)
    // vector's size has no limits, So stack will never full
  }

  void push(int value){ // O(1)
     vec.push_back(value);
   }
   
  void pop(){ // O(1)
    vec.pop_back();
  }

  int top(){ // also called : int peek()
    return vec[vec.size()-1];
  }


};

int main(){
    Stack stack1;
    stack1.push(20);
    stack1.push(40);
    stack1.push(30);

    while (!stack1.isEmpty())
    {
        cout << "| " << stack1.top() <<  " |" <<endl;

        stack1.pop();
    }
// Output :
// | 30 | <-- top
// | 40 |
// | 20 |

    return 0;
}