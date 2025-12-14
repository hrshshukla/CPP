#include <iostream>
// Recursion : jab ek function apne aap ko hi baar-baar call karta hai kisi problem ko solve karne ke liye.
// Factorial of 6  is written as  "6!"
// 6! = 6*5*4*3*2*1
// 6! = 720 
using namespace std;
int factorial(int n){
    if (n<=1){ // 1 se chota number accept krega toh 1 return kr dega 
        return 1;
    }
    
    return n * factorial(n-1);
    // 6 * factorial(5)                    
    // 6 * 5 * factorial(4)
    // 6 * 5 * 4 * factorial(3)
    // 6 * 5 * 4 * 3 * factorial(2)
    // 6 * 5 * 4 * 3 * 2 * factorial(1)
    // 6 * 5 * 4 * 3 * 2 * 1
    
}

int main(){
   int a = 6;
   factorial(a);
   cout<< "The factorial of "<<a<< " is "<<factorial(a)<<endl;
    return 0;
}