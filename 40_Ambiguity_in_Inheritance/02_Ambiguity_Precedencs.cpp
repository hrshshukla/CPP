#include <iostream>
// If a (class Base) has function say() and 
// from (Class Base), Another class is derived named as (class derived) which has its own say() function
// then (Class derived) say() function will run 

// this is also called as method overriding
using namespace std;

class baseClass{

 public:
     void say(){
        cout << "Good Morning" << endl;
     }
};

class derivedClass : public baseClass{

 public:
    // This function will overwrite baseClass say() function
     void say(){
        cout << "Good Night " << endl;
     }
};


int main(){
    derivedClass obj1;
    obj1.say(); // Good Night

    return 0;
}