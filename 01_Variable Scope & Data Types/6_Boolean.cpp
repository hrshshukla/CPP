#include <iostream>
// Loops run only if condition is TRUE and in FALSE condition they will not run.
// Boolean gives that TRUE or FALSE value.


using namespace std;

int main(){
    bool have_key= true;
    bool doorislocked= false;
    
    if (have_key && !doorislocked){ //Only if both condition are true : have_key = TRUE And opposite of doorlocked (false) is !doorlocked  = TRUE 

        cout<<"You can enter";
    }

    return 0;
}