#include <iostream>
// What is TYPECASTING? :  The process of converting a variable from one data type to another.
// 
using namespace std;

int main(){
    float x = 80.6f;

    // Converting Float "X" into Integer
    cout<<"The value of x is :"<<(int)x<<endl;  // Output : 80
    cout<<"The value of x is :"<<int(x)<<endl;  // Output : 80    Another way 


    int a = 4;
    float b = 8.2;

    cout<< "The Value of Int a + Float B is :"<< a+b <<endl;    // Output = 12.2
    cout<< "The Value of Int a + Int B is :"<< a+int(b) <<endl; // Output = 12
    

    
    return 0;
}