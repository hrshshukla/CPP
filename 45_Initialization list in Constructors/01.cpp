#include <iostream>
// Initializing Variables in side the function (Another way)
// ---> Only For Constructor
// ---> Cannot be used for Simple Function 

// constructor (argument1, argument2) : X_variable(argument1) , Y_variable(argument2) 
//          {
//              function_Body
//          }

// Learning : Jo pehle declare hota hai, wo pehle initialize hota hai

using namespace std;


class marks{

 public:  

    int a;
    int b;

// Intialization possibilities

    marks(int num1, int num2) : a(num1), b(num2)
//  marks(int num1, int num2) : a(num1), b( num1 + num2 ) ---->     a = 2     b = 2 + 3
//  marks(int num1, int num2) : a(num1), b( a + num1 )    ---->     a = 2     b = 2 + 3 

//  marks(int num1, int num2) : b( num2 ), a(num1 + b)   ---->      b = 84375   a = 2 error because (declaration hierarchy) , SOLUTION : intialize (b) then (a)
    {
        cout << "The value of a is : " << a<< endl;
        cout << "The value of b is : " << b<< endl;
    }
};


int main(){
    marks harsh(2, 3);

    
    return 0;
}