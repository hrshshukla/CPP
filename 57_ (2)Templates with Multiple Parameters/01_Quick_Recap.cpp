#include <iostream>
// Templates me Multiple Parameters kaise pass krwate hai ye humne pehle bhi padh lia hai 
// RECAP:
// template <class dataType, int size>; -----> Ye last time dekha tha humne 

// Phir bhi ek baar aur...
using namespace std;

template <class type_1, class type_2>
class complex{
    type_1 variable_1;
    type_2 variable_2;

 public:
     complex(type_1 a, type_2 b){
        variable_1 = a;
        variable_2 = b;
     }

    void print(void){
        cout << "The value of :" << endl<<"Variable_1 : " << this->variable_1 << endl << "Variable_2 : " << this->variable_2 << endl;
    }
};  
int main(){
    complex<int, float> obj(20, 30.4);
    obj.print();

    return 0;
}