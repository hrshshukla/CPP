#include <iostream>
// Ambiguity means confusion 

// How this problem looks :
// ----> When we define same name of function in 2 classes (function Greet) and then we inherit those 2 class to make a new derived class, 
// ----> now if we call that function (function Greet) from derived class it will give error 
// ----> becasue the compiler is confused to choose that which (function Greet) he should run

// SOLUTION : create new function and use scope resolution operator also called ambiguity operation
// SYNTAX : common-function-name () { 
//              class_name :: function name 
//             }

using namespace std;

class baseClass_1{

 public:
     void greet(){
        cout << "Good Morning" << endl;
     }
};

class baseClass_2{

 public:
     void greet(){
        cout << "Good Night" << endl;
     }
};

class derivedd : public baseClass_1, public baseClass_2{
     
 public:
    // Case 1 : Not defining which base class greet function to use.

    // Case 2
    void greet(){
      baseClass_1 :: greet();
    }  
};

int main(){
   // Case 1 :  derivedd obj_1; 
   //           obj_1.greet(); <------- This will confuse the compiler bewteen baseClass1 greet() and baseClass2 greet()

    derivedd obj_2;
    obj_2.greet();  // Output : Good Morning


    return 0;
}