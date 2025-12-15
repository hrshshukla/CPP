#include <iostream>
// Friend Function 
// A Friend function allows an EXTERNAL FUNTION to access the PRIVATE + PUBLIC data of the CLASS without making it a member of the CLASS
// It is not the OBJECT or MEMBER of the CLASS even though It is declared inside of the CLASS.

// LEARNING : 
// Local-object : jaise ki (0bj_3) jo ki ek OBJECT toh hai COMPLEX class ka, par ye (sum_input) function ke andar declare hai toh 
//             (obj_3) ki izzat sirf (sum_input) function ke andar hi hai 

using namespace std;

class complex{
    int a;
    int b;

public:
    void input_value(int num_1,int num_2){
        a = num_1;
        b = num_2;
    }
    friend complex sum_input(complex obj_1, complex obj_2);// Jo (sum_input) function bahar banaya tha usko CLASS ke andar declare krna padega

    void print_input(void){
        cout << a  << "  " << b << endl;
    }
};

complex sum_input(complex obj_1, complex obj_2){// Hume yaha par CLASS ke OBJECT ki value return krni hai Aur Q ki COMPLEX ek CLASS hai toh COMPLEX naam ka function banayege 
    complex obj_3; // Ye ek local Object hai
    obj_3.a = obj_1.a + obj_2.a;
    obj_3.b = obj_1.b + obj_2.b;
    cout << obj_3.a << "  "  << obj_3.b << endl;
}

int main(){
    complex obj_1, obj_2, sum;

    obj_1.input_value(2,4);
    obj_1.print_input();

    obj_2.input_value(6,6);
    obj_2.print_input();

    sum_input(obj_1,obj_2);

    return 0;
}