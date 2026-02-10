#include <iostream>
// In last concept we have seen that :
// If (base_class pointer) points to (derived_class) display() then also, the display() of Base Class will run.

// And if I want that (base_class pointer) points to run  display() of (derived_class). Then, We will use Virtual Keyword. 
using namespace std;

class BaseClass{

 public:
     int var_base = 0;

    virtual void display(void){ // <------ making it virtual. Now if (base_class pointer) points to (derived_class) display() then, (derived_class) display() will run.
        cout << "Accessing variable of baseClass -> (var_base) : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass{

 public:
    int var_derived = 1;

    void display(void){
        cout <<endl<< "Welcome to derived Class" << endl;
        cout << "Accessing Inherited variable of baseClass -> (var_base) : " << var_base << endl;
        cout << "Accessing variable of derivedClass -> (var_derived): " << var_derived << endl<<endl;
    }
};

int main(){
    BaseClass* pointer_of_BaseClass;
    BaseClass Object_of_BaseClass;
    DerivedClass Object_of_DerivedClass;

    pointer_of_BaseClass = &Object_of_DerivedClass; 
    pointer_of_BaseClass->display(); // <------ (derived_class) display() will run now.

Output: 
// Welcome to derived Class
// Accessing Inherited variable of baseClass -> (var_base) : 0
// Accessing variable of derivedClass -> (var_derived): 1

    return 0;
}