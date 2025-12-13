#include <iostream>
// 2nd Method two print ARRAY with help of POINTERS
using namespace std;

int main(){

    // Printing Value of ARRAY using POINTERS
    int marks[]= {98, 82, 63, 46};

    int* p=marks;
    cout<< "The value of marks[0] is    "<<*p<<endl;     // p=0
    cout<< "The value of marks[0] is    "<<*(p++)<<endl; // Yaha value of p=0 hi hai lekin next line me p+1 hojayegi
    cout<< "The value of marks[1] is    "<<*(p)<<endl;   // Value of p=1 because (p++) 
    cout<< "The value of marks[2] is    "<<*(++p)<<endl; // ++p means (1+p) = (1+1) = (p=2)
    cout <<endl;

    return 0;
}