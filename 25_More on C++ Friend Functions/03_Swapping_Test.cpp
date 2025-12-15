#include <iostream>
// Iske pehle humne (&) ka use kia value swap krne ko
// Ky ho agar (&a) ki jagha sirf (a) likh du 
// Tab wo call-by-value kehlayega aur Ab value change nhi hogi q ki (a) aur 
// Aur agar value change krni hi hai toh LOCAL SCOPE me change hogi mtlb function ke andar bas value swap hojayegi 
// Aur function ke bahar value 

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
    friend int exchange_value(C1  , C2  );// Yaha pe (C2 b) nhi likha q ki Compliler ko nhi pata ki Class (C2) me (b) naam ka bhi koi member hai
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
    friend int exchange_value(C1  a, C2  b);
 };
    
 
 int exchange_value(C1  a, C2  b){ // Here (obj_of_C1)=a     (obj_of_C2)=b
           int temp = a.num_1;
    a.num_1 = b.num_2;
    b.num_2 = temp;
    cout << "num_1 = " << a.num_1 << endl << "num_2 = " << b.num_2 << endl;
     }


    
int main() {
    C1 obj_of_C1;
    obj_of_C1.input_value(5);
    
    C2 obj_of_C2;
    obj_of_C2.input_value(8);
    
    /*cout << "OLD Call-by-Refrenece Value : "<< endl;
    obj_of_C1.display_value();   Output : 5
    obj_of_C2.display_value();   Output : 8                                     */
    
    exchange_value(obj_of_C1, obj_of_C2); //

    /*cout <<endl<< "NEW Call-by-Refrence Value :" << endl;// Value swap nhi hogi yaha pe q ki (&) hat gya hai 
    obj_of_C1.display_value();   Output : 5
    obj_of_C2.display_value();   Output : 8                                             */
    
    return 0;
}