// Implementing STACk using Linked List ---> #include <list>

#include <iostream>
#include <list>
using namespace std;

class Stack{
    list <int> myLinkList;
 public:

   void push(int value){ // O(1)
     myLinkList.push_front(value);
   }
   
   void pop(){ // O(1)
        myLinkList.pop_front();
    }

  int top(){ // O(1)
    return myLinkList.front();
  }
  
  bool isEmpty(){ // O(1)
    return myLinkList.size() == 0;
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