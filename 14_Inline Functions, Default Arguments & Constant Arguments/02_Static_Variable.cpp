#include <iostream>
// What is Static Variable ?
// Static Variable apni value store krte hai jaise i++ hoti hai LOOP me
using namespace std;

int main(){
    for (int i = 0; i < 10; i++){
        static int c = 0; 
        c = c+1;
        cout<< "The value of (c) in iteration " << i << " is : "<<c<<endl;
    } 
    
    return 0;
}

/* 
Output :

The value of (c) in this iteration is : 1
The value of (c) in this iteration is : 2
The value of (c) in this iteration is : 3
The value of (c) in this iteration is : 4
The value of (c) in this iteration is : 5
The value of (c) in this iteration is : 6
The value of (c) in this iteration is : 7
The value of (c) in this iteration is : 8
The value of (c) in this iteration is : 9
The value of (c) in this iteration is : 10

*/