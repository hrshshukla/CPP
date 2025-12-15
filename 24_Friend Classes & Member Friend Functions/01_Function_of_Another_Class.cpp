#include <iostream>
// Linking FUNCTIONS of CLASS(1) into CLASS(2) with help of Friend Function
using namespace std;

class complex; // ek class complex hai

class calculator{  // Aur ek class hai calculator

 public:

     int sum_value_dimension_One(complex ,complex ); // Only Declaration here 
     // (complex obj_1) = Wrong, Compiler bolega mai kaise maan lu ki class (complex) ke andar (a) naam ka member bhi hai 
    
     int sum_value_dimension_Two(complex ,complex ); // Only Declaration here 
};

class complex{
     int a, b;
     
    public:
    void input_value(int num_1, int num_2){
        a = num_1;
        b = num_2;
    }

     void print_value(void){
        cout << a << " " << b << endl;
     }

     friend int calculator :: sum_value_dimension_One(complex obj_1, complex obj_2); // Making One dimension friend 
     friend int calculator :: sum_value_dimension_Two(complex obj_1, complex obj_2); // Making Two dimension Friend
};

int calculator :: sum_value_dimension_One(complex obj_1, complex obj_2){
    return obj_1.a + obj_2.a;
}

int calculator :: sum_value_dimension_Two(complex obj_1, complex obj_2){
    return obj_1.b + obj_2.b;
}


int main(){
    
    complex obj_1, obj_2, sum;
    obj_1.input_value(2,4);
    obj_1.print_value();

    obj_2.input_value(4,6);
    obj_2.print_value();

    calculator addition_one_dimension; 

    int result = addition_one_dimension.sum_value_dimension_One(obj_1, obj_2);
    cout << result;

    calculator addition_two_dimension;
    int result_2 = addition_two_dimension.sum_value_dimension_Two(obj_1, obj_2);
    cout<< " " << result_2 << endl;

    return 0;
}