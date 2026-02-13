#include <iostream>
// Abhi tak humne <templates> ka use sirf Classes me kia tha, Lekin uska use functions me bhi hoskta hai

//Syntax :
// template <class type1, class type2>
// int myFunction( type1 a, type2 b){};

// Aur abhi tak hum parameter pass krte the aise : class <int, float> object
// Lekin function me (arguments) ka datatype hi (parameter) ka datatype ban jata hai,
// type2 myFunction( type1 a, type2 b){ -------> myFunction(20, 4.5f)
// ab (20) (int) hai toh, ----> (type1 = int)  
// aur (4.5f) (float) hai toh, -----> (type2 = float)

// Final : float myFunction( int a, float b)

using namespace std;

template <class type1, class type2> // default value bhi set kr sakte hai------>   (type1 = int)     (type2 = float)

type2 myFunction( type1 a, type2 b){ 
    type2 add = a + b;
    return add;
}

int main(){

    cout << "Final answer of int (20) + float (4.5) : " << myFunction(20, 4.5f)<< endl; //Output = 24.5

    return 0;
}