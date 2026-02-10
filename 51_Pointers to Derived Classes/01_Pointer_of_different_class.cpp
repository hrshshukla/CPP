#include <iostream>
using namespace std;
// Base Class pointer can only points to the base class (objects or functions) and cannot point to the derived class (objects or functions)
// If we try to point Derived Class function(display) it will run the function(display) of Base Class

// Whereas, (derived_class) pointer can access the (members and functions) of (base_class) because it is inherited from (base_class)
 
// the pointer of base class only calls the function of base class even if 
// the pointer of base class is pointing to derived class 

class BaseClass{
 public:
     int var_base = 0;

    void display(void){
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

// Trying to access (derived_class) members through (base_class) pointer

    pointer_of_BaseClass = &Object_of_DerivedClass; 
    //pointer_of_BaseClass->var_derived;       ---------> (*pointer_of_BaseClass).var_derived; ---------> ERROR because (pointer of base class) cannot access (members of Derived class).
    pointer_of_BaseClass->display();      // Output : Accessing variable of baseClass -> (var_base) : 0.  Hence display() of base-class is called.




// Trying to access (base_class) members through (base_class) pointer

    pointer_of_BaseClass->var_base = 10; // Updating value of (var_base)
    pointer_of_BaseClass->display(); //  -----> Output : Accessing variable of baseClass -> (var_base) : 10



// Creating a (derived_class) pointer to acces (derived_class) member 
    DerivedClass* pointer_of_DerivedClass;
    pointer_of_DerivedClass = &Object_of_DerivedClass;

    pointer_of_DerivedClass->var_derived = 20;
    pointer_of_DerivedClass->var_base = 23; // -----> (derived_class pointer) pointing to (base_class member) -> var_base
    pointer_of_DerivedClass->display(); 

// Output :
//  Welcome to derived Class
//  Accessing Inherited variable of baseClass -> (var_base) : 23
//  Accessing variable of derivedClass -> (var_derived): 20

    pointer_of_BaseClass->display(); // -----> Output : Accessing variable of baseClass -> (var_base) : 23


    // pointer_of_BaseClass->display(); // ------> Base Class, this is display of base_class where var_base = 10 but it is showing var_base = 23, Why? 


// Answer :
//---------> (1) Actually, var_base in the DerivedClass object is not separate from var_base in BaseClass.
//             When you define DerivedClass as inheriting from BaseClass, it doesn’t create a separate var_base—it inherits the var_base from BaseClass,
//             meaning it’s a single shared member within the DerivedClass object.

//---------> (2) It is simple because (var_base) is inherited from (base_class) to (derived_class).  So (derived_class) can access (var_base) a
//             And (pointer_of_DerivedClass) can also (var_base) inside (base_class).



    return 0;
}

// Final Output :
// Accessing variable of baseClass -> (var_base) : 0
// Accessing variable of baseClass -> (var_base) : 10
// Accessing Inherited variable of baseClass -> (var_base) : 10
// Accessing variable of derivedClass -> (var_derived): 20
// Accessing variable of baseClass -> (var_base) : 23