#include <iostream>
//  Onenote
//  Inline function : sara processing compiling ke time pe hi kr leta hai, aur "a+b" ki jagha seddha answer return kr deta hai.
//  Normal function : Phle CPU function ki line tak jayega, arguments pass karega, store karega, aur fir function execute hoga, phir value retrun dega
using namespace std; 

inline int multiply(int a, int b){  // "inline" add krn hai
    return a*b; // Iska answer compiler return kr dega compiling ki time pe hi
}

int main(){
    int a = 2, b=5;
    multiply(a,b); // Ye hai FUNCTION ko Call krna : FUNCTION ko use krna hi function ko call krna kehlata hai

    cout<< "The value of a*b is :"<<multiply(a,b)<<endl;

    return 0;
}