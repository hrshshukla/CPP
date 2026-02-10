#include <iostream>
// Must Visit (03_possibilities.cpp) 
// LEARNING : Chaining

using namespace std;

class Complex {
    int a;
public:
    
    Complex& setData(int a) {  
        this->a = a; // this->a = 8 (this) pointer have access to modify the variable values inside the One(Object). Becoz (this) = holds the address of One
        return *this; // (*this) reference --------> (One)refrence -------> creating refrence of One = (int &ref_One = One) -------> ref_One 
                      // Final : ref_One
    }

    void printData(void) {
        cout << " a is = " << a << endl; // Outputs: a is = 4 (the value of a)
    }
};

int main() {
    Complex One; 
    // One.setData(8); 
    // One.printData(); 

    One.setData(8).printData();
//  Process : One.setData(8).printData(); -------> One.printData();
//                                                   ^
//                                                   |
//                                   One Updated with a = 8  (iske andar already a=8 set ho chuka hai)

    return 0; 
}
