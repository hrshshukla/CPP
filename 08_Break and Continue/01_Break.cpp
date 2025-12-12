#include <iostream>
// What is BREAK : terminate a block of code 
using namespace std;

int main(){
    int a;
    for (int i = 0; i < 10; i++){

        cout<< i <<endl; // Print "i"
        if (i==8){       // If i becomes 8
            break;       // Then break the loop 
        }
    }
    
    return 0;
}