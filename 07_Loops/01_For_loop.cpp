#include <iostream>
// For loop
using namespace std;

int main(){
    int a;

// Normal For-loop
    for (int  i = 0; i <= 100; i++){ 
        cout<<i<<endl; // Print from 0 to 100
    }
    
//Infinite For-loop
    for (int  i = 0; 2<3; i++){ // Put a value which is always "TRUE" like "2<3"
    
        cout<<i<<endl; // Print from 0 to infinite
    }

    for (; ;) // NO (declaration and intialization), NO Condition, NO Updation
    {
        cout << "print infinite";
    }
    

    return 0;
}