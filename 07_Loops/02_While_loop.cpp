#include <iostream>
// While Loop
// LEARNING : we can directly write "true" in CONDITION which will lead to INFINITE LOOP
using namespace std;

int main(){

    int i=0;        // initialization
    while (i<=100){  // condition
        cout<< i <<endl;// command
        i++;        // updation
    }
    
//INFINITE LOOP
    int i=0;        
    while (true){  // Because condition is always "true"
        cout<< i <<endl;
        i++;        
    }

    return 0;
}