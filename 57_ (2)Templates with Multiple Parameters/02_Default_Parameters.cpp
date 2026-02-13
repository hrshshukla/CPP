#include <iostream>
// Templates me Default Parameters means parameters ka (datatype) pehle hi iniltialize kr dena 
// Syntax :  template <class type_1 = int,  class type_2 = float>; ------> ye overwrite ho sakte hai 



using namespace std;

template <class type_1 = int, class type_2 = char>
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
    complex <> obj1(8, 'H'); // -------> is line me maine koi parameter pass nhi kia hai. Hence, Default Parameter automatic use hojayge 
    obj1.print();

    complex <int, float> obj2(20, 30.4); //---------> yaha maine  parameters pass kiye hai. Hence overwrite hoga : (type_1 = int )  (type_2 = float) 
    obj2.print();

    return 0;
}