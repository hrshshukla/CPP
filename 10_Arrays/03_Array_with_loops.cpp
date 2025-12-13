
#include<iostream>
// How to Print Array with Loops
using namespace std;

int main()

{                                                                                                
    int marks[4]={82, 74, 78, 89}; 
    
    // Printing Arrays with Loops 
    for(int i=0; i<4; i++){    // i<4 because marks[] Start from 0 to 4
        cout << "The value of marks " <<i<< " is " <<marks[i]<<endl;
    }
        
    return 0;
}