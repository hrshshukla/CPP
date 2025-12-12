#include <iostream>
// Exit : Terminate whole code
using namespace std;

int main(){
    int a;
    for (int i = 1; i <= 10; i++){

        cout<< i <<endl; // Print "i"
        if (i==8){       // If i becomes 8
            exit;       // Then EXIT = end the code 
        }
    }
    
    return 0;
}