#include <iostream>
// Templates helps to create and cutomize classes 

// template ------> Class ------> Object  
// Jaise (Class) ke blueprint se (Object) banta tha, Waise hi (Template) ke blueprint se (Class) banai ja sakti hai

// Abhi tak agar ek Class me (int) data type ke varibale aur functions hai, Toh float type ke variable ke liye mujhe doosri Class create krni padegi 
// Lekin agar hum (Template) ka use kr rhe hai toh (datatype) means Class ke andar (int) aur (float) dono use kr payege

// Syntax : template <(data_type) (parameter_name)>
// Basically (parameter_name) jo hai wo exchnage hojayega us (data_type) ke sath jo data_type hum Class ka object create krte time decide krege jaise 
// [ complex<int> obj1; ] ---> (obj1) me ab jaha-jaha (prameter_name) hoga waha-waha (int) hojayega 

using namespace std;

template <class example> // -----> data_type = class       parameter_name = example 

class complex{
    public:
    example add(example a, example b) { 
        return a + b;
    }
};

int main(){
// Creating a (int) data_type class with the help of template 

    complex<int> obj1; // ab jaha-jaha (example) likha tha waha-waha (int) hojayega
    cout << "The value of (int) a + b = " << obj1.add(20,30) << endl; 

// Creating a (float) data_type class with the help of template 

    complex<float> obj2; // ab jaha-jaha (example) likha tha waha-waha (float) hojayega
    cout << "The value of (float) a + b = " << obj2.add(20.1f,90.3f) << endl; 


    
    return 0;
}