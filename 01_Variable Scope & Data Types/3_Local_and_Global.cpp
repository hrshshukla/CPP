#include <iostream>
// Can we make same name of Global variable and Local Variable?   YES
// Local have more priority than Global inside a specific function
// LEARNING :  Updating Value of variable


using namespace std;

int global_variable = 10; // Global Variable
void sum(){
    cout<< global_variable;
}


int main()
{
    int global_variable = 20; // Local Variable
    global_variable = 23;     // LEARNING : Updating Value of local Variable 
    cout<< global_variable;

    sum();

    // Output = 10 20;  Both Global+Local print
    return 0;
}