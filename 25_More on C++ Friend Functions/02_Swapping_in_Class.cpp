#include<iostream>
// Ek class (C1) ke andar jo (num_1) tha uski value swap krege doosri class (C2) ke andar jo (num_2) hai
// Using call-by-refrence to swap value 
// Mtlb (num_1) ka address pe jao aur uski value change kr do (num_2) ke sath
using namespace std;
class C2; 

class C1{
    int num_1;
    
 public:
     void input_value(int number){
        num_1=number;
    }
    void display_value(void){
        cout << "The value of num_1 is :" << num_1<< endl;
    }
    friend int exchange_value(C1 & , C2 & );// Yaha pe (C2 &b) nhi likha q ki Compliler ko nhi pata ki Class (C2) me (b) naam ka bhi koi member hai
 };
 
 class C2{
    int num_2;
    
 public:
     void input_value(int input_num){
        num_2=input_num;
    }
    void display_value(void){
        cout << "The value of num_2 is :" << num_2<< endl;
    }
    friend int exchange_value(C1 & a, C2 & b);
 };
    
 
 int exchange_value(C1 & a, C2 & b){ // Here (obj_of_C1)=a     (obj_of_C2)=b
           int temp = a.num_1;
    a.num_1 = b.num_2;
    b.num_2 = temp;
     }


    
int main() {
    C1 obj_of_C1;
    obj_of_C1.input_value(5);
    
    C2 obj_of_C2;
    obj_of_C2.input_value(8);
    
    cout << "Old Value : "<< endl;
    obj_of_C1.display_value();
    obj_of_C2.display_value();
    
    exchange_value(obj_of_C1, obj_of_C2);

    cout <<endl<< "New Value :" << endl;
    obj_of_C1.display_value();
    obj_of_C2.display_value();
    
    return 0;
}