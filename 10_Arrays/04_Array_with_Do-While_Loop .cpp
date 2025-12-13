#include<iostream>
// Array with Do_while loop
using namespace std;

int main()

{                                                                                                
    int marks[4]={82, 74, 78, 89}; 
    
    // Printing Arrays with Do While Loop
    int i =0;
    do{
         cout << "The value of Marks " << i<<" is "<<marks[i]<< endl;
         i++;
    }while(i<4);

    return 0;
}