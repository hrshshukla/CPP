#include<iostream>
// What is Function Overloading ?
// Multiple fuction of same name to perform different tasks based on the type of arguments passed this is called function overloading.

using namespace std;
int add(int x, int y){  // Ye function automatic sirf 2 digit hi input lelega
    cout << "Using 2 Arguments" << endl;
    return x+y;
}
int add(int x, int y, int z){ //  Ye bhi automatic 3 digit wala input lelega 
    cout << "Add fuction for 2 Arguments" << endl;
    return x+y+z;
}

int main(){
    cout << "The Value of 5 + 10 is :" <<add(5,10)<< endl;
    cout << "The Value of 5 + 10 + 15 is :" <<add(5,10,15)<< endl;
    return 0;
}