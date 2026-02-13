#include <iostream>
// Agar hum 2 function create krte hai 
// (1) Normal function : -----> int myFunction( int a ){}
// (2) Template Function : ---> type1 myFunction (type1 a){}

// Aur int main()  se argument pass kare (5), toh q ki (5) ek (int) ye -----> (int myFunction) ko pass hoga naa ki (type1 myFunction) ko
// means agar argument ke exact match ke datatype ka function bana hai to wo exact-match ko hi pass hoga, templatised function ko nhi.

using namespace std;

// Normal function
int myFunction(int a){
    cout << "Normal function is running : " << a << endl;
}


//Templatised function
template <class type1> 
type1 myFunction (type1 a){
    cout << "Templatised function is running : " << a << endl;
}


int main(){
    myFunction(5);

    return 0;
}