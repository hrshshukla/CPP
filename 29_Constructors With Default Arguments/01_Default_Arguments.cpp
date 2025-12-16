#include <iostream>
// Abhi tak function me hum values pass krte the lekin ab hum ek DEFAULT value bhi Argument me set kr sakte hai
// Normal Argument : funtion(int x, int y)
// Default Argument : funtion(int x = 8 , int y = 4) 
// Ab agar user (x) ki value pass krta hai 16 toh 8 hat jayega aur x = 16 hojeyga
// lekin agar kuch pass nhi krta toh wo x = 8 hojeyga 
using namespace std;

class complex{
     int a;
     int b;


public:
     complex(int x = 8, int y = 4){ // 
        a = x;
        b = y;
     }

    void print_value(){
        cout << "a = " << a << "  b = " << b << endl;
    }
};


int main(){
    cout << "Default value will print :" << endl;
    complex obj_1;
    obj_1.print_value();

    cout << "The value Passes as Argument will takeover" << endl;
    complex obj_2(16,32);
    obj_2.print_value();
    
    return 0;
}