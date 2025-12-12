#include <iostream>
// What is CONTINUE : 
using namespace std;

int main(){
    int x;
    for (int i = 0; i < 10; i++){

        if (i==5){
            continue;// Means when "i"="5" skip below code and continue the next iteration
        }        
        cout<< i <<endl;
    }
    
    return 0;
}