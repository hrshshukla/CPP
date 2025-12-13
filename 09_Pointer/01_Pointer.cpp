#include <iostream>
// What is POINTER?  : Pointer "*ptr" is a DATATYPE which stores ADDRESS "&" of another variable.
using namespace std;

int main(){
    int a = 8;
    int* b = &a;

//  (&) --->(Address of) operator
    cout<< "Address of (a) is " <<&a<<endl; // 0x61ff08
    cout<< "Address of (a) is " <<b<<endl;  // 0x61ff08


//  (*) ---> (value at) Dereference operator
    cout<< "Value at Address b" <<*b<<endl; // 8

// (**) ---> (Pointer To Pointer)
    int** c= &b;
    cout<< "Address of (b) is " <<c<<endl;
    cout<< "Address of (b) is " <<&b<<endl<<endl;

    cout<< "*c  " <<*c<<endl; // This case : **c point to > *b which is = &a
    cout<< "Value at Address b" <<**c<<endl; // This Case : **c point to > *b wil point to > (a) which is = 8;


    return 0;
}



