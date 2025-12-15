#include <iostream>
// Phele jo code banaya usme humne 2 FUNCTION jo ki CLASS (calculator) ke andar the unko CLASS (complex) ke sath link kiye 
// Lekin agar mai CLASS (calculator) ke andar 100 function banau aur phir ek ek krke usko CLASS (complex) me link karu toh bhut tume lagega 
// Iske liye hum use krege FRIEND CLASS 
// Mtlb ek ek function ko friend banane se accha hai poori CLASS ko hi FRIEND bana do

using namespace std;

class complex;

class calculator{  

 public:

     int sum_value_dimension_One(complex ,complex ); 
    
     int sum_value_dimension_Two(complex ,complex ); 
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

    //  friend int calculator :: sum_value_dimension_One(complex obj_1, complex obj_2); 
    //  friend int calculator :: sum_value_dimension_Two(complex obj_1, complex obj_2);
    
    // Ab seedha FRIEND CLASS 
    friend class calculator;
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