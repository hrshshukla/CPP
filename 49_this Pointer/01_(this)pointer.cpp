#include <iostream>
// (this) is a type of pointer which is automatically created by C++ 
// (this) pointer points to the Object 
// (this->) = (*this) = Object
// this = &Object (Address of the Object)

// Usage : 
// It also helps distinguish between instance variables and parameters or other variables with the same name.
// Helps in chaining
// so if you say : (this->a) or (*this).a -------> means One.a (Object)

using namespace std;

class Complex{
     int a;
 public:
    int setData(int a){
        // a = a; --------> Wrong 
        this->a = a; // (this->a) -----> (*this).a ------> One.a
    }

    void printData(void){
        cout << " a is = " << a << endl;
    }
};


int main(){
    Complex One;
    One.setData(4);
    One.printData();
    return 0;
}