#include <iostream>
// LEARNING : Any DECIMAL number : 2.54 is by DEFAULT a DOUBLE. 
// for LONG DOUBLE we use "l" suffix. like "40.5l"
// for  DOUBLE we simply type "DECIMAL NUMBER" and its by default DOUBLE. 
// for  FLOAT type "2.54f". The 'f' suffix makes it a float
using namespace std;

int main(){
    float x = 40.5;
    long double y = 40.5;
    
    // Here BY DEFAULT "40.5" is a DOUBLE

     float a = 40.5f;// Converting it into FLOAT through "f"
    
    cout << "The size of y " << sizeof(y) <<endl << "the value of x = " << sizeof(x)<< endl;
    cout << "the size of a = " << sizeof(a)<< endl;


    return 0;
}