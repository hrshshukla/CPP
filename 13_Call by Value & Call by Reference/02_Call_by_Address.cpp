#include <iostream>
// Easiest method 
// --Call by Address-- mtlb direct adderess hi lelo
// Abhi tak hum swap function me POINTERS ka use krte the ADDRESS ko store krne ke liye : swap_function(int* a) to store "&a"
// Q ki int* a = &a 
// Lekin ab hum POINTERS use hi nhi krege, Ab seedha swap_function(int &a, int &b) 
// Toh ab jo bhi input ayega swap function me automatic address me convert hojayega

using namespace std;
int swap_pointer(int &a, int &b){ // jo bhi input tha wo address me convert hogya 
    int temp = a; 
    a = b;
    b = temp;
}

int main(){
    int a=12, b=44 ;
    swap_pointer(a,b); 
    cout<< "The value of (a) " <<a<<"  and (b) is   "<<b<<endl;
    
    return 0;
}