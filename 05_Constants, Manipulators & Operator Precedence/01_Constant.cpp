#include <iostream>
// Perviously we learned that we can change DATA TYPES from "int" to "float" but now
// what if i wanted to create a VARIABLE which cannot be changed. For that
// USE : "const"
using namespace std;

int main(){
    const int x = 24;
    cout<< "The value of \"int x\" is :"<<x<<endl; // Output : 24


    int x = 36;
    cout<< "The value of \"int x\" is :"<<x<<endl; // Output : ERROR

    return 0;
}