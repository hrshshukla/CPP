#include <iostream>
// Ek aisa constructor jo ek CLASS ke (Obj_1) ki value ko doosre (Obj_3) me copy krde 
// Mtlb (Obj_1.a) copy to (Obj_3.a)
// That means ab hum aisa constructor banayege jo (Object) as a ARGUMENT Accept krega 
using namespace std;

class Value{
     int a = 0; // Ye (a) ki default value hai jo ki overwrite hojayegi baad me 

public:
     Value (){}
     Value(int x); // Integer arguments ko ye handle krega 
     Value(Value &obj); // Ye constructor obj ka address as a argument lega 
                        // Lekin agar mai ye constructor na banau aur phir bhi object pass kru as a Argument---> obj_1(obj_2) 
                        // Tab Compiler khud ek constructor provide kareyga aur object as argument accept kreaga error nhi dega
     void Print();
};

Value :: Value(int x){
    a = x;
}
void Value :: Print(){
    cout << "The value of a is = " << a << endl;
}

Value :: Value(Value &obj){
    cout << "Copy Constructor Called Succefully" << endl;
    a = obj.a; // Ab jo bhi object pass hoga uske anadar jo (a) ki value hogi wo (a) me ajeygi 
}

int main(){
    Value obj_1(20); 

// Case 1
    Value obj_2(obj_1); // Passing Object as a ARGUMENT
    obj_2.Print();      // Successfull

// Case 2
    Value obj_4 = obj_1;  // --> Copy Constructor Invoke hoga 
    obj_4.Print();        // Successfull

// Case 3
    Value obj_5;          // Declaration
    obj_5 = obj_1;        // Initialization --> Copy Constructor Invoke NHI hoga
    obj_5.Print();        // FAIL ---> (Obj_4) jo hai wo (Obj_1) jaisa hogya 


// Case 4
    Value obj_3;          // Declaration
    obj_3 = Value(obj_1); // Initialization --> Copy Constructor Invoke hoga 
    obj_3.Print();        // Successfull

    return 0;
}