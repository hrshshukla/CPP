#include <iostream>
// Ab hum functions ko (scope resolution operato)r ki help se define karege 
// ------> Syntax : (returnType) (class_name) <parameter> :: (function_name) {}
using namespace std;

template <class type1> 

class complex{

    public:
        type1 var;

        complex(type1 a){
            var = a;
        }
        
        void display(); // declaration

}; 

template <class type1> //--------> template ko waps declare krna padega 
void complex <type1>:: display(){ // ------> Syntax : (returnType) (class_name) <parameter> :: (function_name) {}
     cout << " var : " << var << endl;
}


int main(){
    complex<int> obj1(4);
    obj1.display();

    return 0;
}