#include <iostream>
// Manipulators : Used to manage how your output will be shown in the terminal
// Example : "endl" shows a new line in output
// TYPES of Manipulators : 
//                          1: setw : helps in alignment 
                            #include <iomanip> // Library for (stew)

using namespace std;


int main(){
    int x, y, z;
    x = 2;
    y = 144;
    z = 8000; //this is a biggest number and have 4 digit number.  will use setw(4)
    
    cout<< "Without (setw)" <<endl;
    cout<< "The value of \"x\" without setw : "<<x<<endl;
    cout<< "The value of \"y\" without setw : "<<y<<endl;
    cout<< "The value of \"z\" without setw : "<<z<<endl;
/* Output :
     Without (setw)
     The value of "x" without setw : 2
     The value of "y" without setw : 144
     The value of "z" without setw : 8000       */

    cout<< "With (setw)" <<endl;
    cout<< "The value of \"x\" with setw : "<<setw(4)<<x<<endl; // setw(4) means it will give space of 4 character 
    cout<< "The value of \"y\" with setw : "<<setw(4)<<y<<endl;
    cout<< "The value of \"z\" with setw : "<<setw(4)<<z<<endl;
    cout<<endl;

/* Output :
    With (setw)
    The value of "x" with setw :    2
    The value of "y" with setw :  144
    The value of "z" with setw : 8000                           */




    
    return 0;
}