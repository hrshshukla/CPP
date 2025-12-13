#include <iostream>
// Ab hum function ka use krke ek variable ki value ko change krege 
// Then "void swap_function()"
// Now  int & swap_function() , Ab use krege [&] function ke naam pe + int function hoga + value return hogi
 
using namespace std;
int &swap_function(int &a, int &b){
    int temp = a;
     a = b;
     b = temp;
     return a; 
}


int main(){
    int a=12, b=44 ;
    swap_function(a,b);// ab q ki humne return a; kha hai toh : swap_function(x, y) hat ke yaha par "a" ajyega
    //   "a"                inshort bolu toh  swap_function(x, y) = a , Ab aage...

    swap_function(a,b)= 24;
    //              a = 24;              

    cout<<"The value of (a) is : "<<a;  // Output-> The value of (a) is : 24

    return 0;
}