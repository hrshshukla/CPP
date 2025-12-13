#include <iostream>
// --Pass-by-Value--  (sasti swapping) mtlb copy banao aur swap kro
// Using "Temp" to swap value of two variables
using namespace std;

// This is a Pass by Value function
void swap(int a, int b){
    int temp = a; 
    a = b;
    b = temp;
}


void swap2(int a, int b){
    a = b-a + (b=a);
    cout << "a = " << a << endl <<"b = " << b << endl;
}

int main(){
    int a=2, b=1;
    
    swap(a,b);// You need to perform this function first 
    cout<<"The value of (a) and (b) After swapping : "<<a<<" and "<<b<<endl;
    
    swap2(a,b);

    return 0;
}

