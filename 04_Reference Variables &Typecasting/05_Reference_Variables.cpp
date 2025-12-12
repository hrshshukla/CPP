#include <iostream>
// A reference variable refer to the same memory location but have different name.

// x and y refer to the same memory location. When you create a reference variable like int &y = x;, y becomes an alias for x. This means both x and y point to the same memory address, and any modification done through y will affect x, and vice versa.
// So, x and y do not have separate memory locations; they share a single memory location in memory.
// USE :
using namespace std;

int main(){
    int x=20;
    int &y=x; // y becomes an alias for x.

    cout<<x<<endl; // Output : 20
    cout<<y<<endl; // Output : 20
    return 0;
}