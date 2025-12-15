#include <iostream>
// Passing OBJECTS in function as ARGUMENTS
// LEARNING : (obj_1.a) means (obj_1) ke andar jo (a) hai uski value
using namespace std;

class complex{
     int a;
     int b;

public:
     void input_value (int num_1, int num_2){
        a = num_1;
        b = num_2;
     }

     void sum_input(complex obj_1, complex obj_2){
          a = obj_1.a + obj_2.a;
          b = obj_1.b + obj_2.b;
     }

     void print_value(void){
          cout << "The value of a is :" << a << " And the value of b is :" << b<< endl;
     }
};

int main(){
    complex obj_1, obj_2, obj_3;

    obj_1.input_value(3,4);
    obj_1.print_value();

    obj_2.input_value(10,20);
    obj_2.print_value();

    obj_3.sum_input(obj_1, obj_2);
    obj_3.print_value();

    return 0;
}