#include <iostream>
// What is SCOPE RESOLUTION : The scope resolution operator (::) helps to access a specific variable, function, or class member when there are multiple scopes are available.
// By default the scope is local 

using namespace std;

int x = 10; // Global Variable

int main(){
    int x = 23; // Local Variable
    cout<<x<<endl;    // Print = 23

    ::x=20; // Redefining Global Variable
    cout<<::x<<endl;  // Print = 10 because of "::" SCOPE RESOLUTION

    return 0;
}