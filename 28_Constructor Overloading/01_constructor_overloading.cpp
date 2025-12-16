#include <iostream>
// Constructor Overloading bhut Similar hai Function over loading ki tarha
// Bas Constructor apni size ke hisab se arguments accept kr leta hai
// Hum 3 constructor bnayege 
using namespace std;

class complex{
     int a;
     int b;

public:
     complex(){ //---------> Constructor (1) : Jab user koi value input nhi krega toh A aur B = 0 hojayege 
        a = 0;
        b = 0;
     }

     complex(int x){ //---------> Constructor (2) : Jab user Ek value input krega Aur ek nhi krega toh B = 0 hojayege 
        a = x;
        b = 0;
     }

     complex(int x, int y){ //---------> Constructor (3) : Jab user dono value input krega
        a = x;
        b = y;
     }

    void print_value(){
        cout << "a = " << a << " b " << b << endl;
    }
};

int main(){
    complex obj_1;
    obj_1.print_value(); // Output : a = 0     b = 0
   
    complex obj_2(4);
    obj_2.print_value(); // Output : a = 4     b = 0
   
    complex obj_3(8,9);
    obj_3.print_value(); // Output : a = 8     b = 9

   
    return 0;
}