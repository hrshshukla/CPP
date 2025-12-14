#include <iostream>
// Not only size like (5,10) & (5,10,15) but data types also, 
// Means If we create two functions one take int and one float , so they will automatically decide what input type they have to take 
using namespace std;

int function_1(int x, int y){ // ye automatic (int) values ko lelega 
    return x+y;
}
int function_1(float x, float y){ // this function will take (float) value automatically and return (int) value
    return x+y;
}

int main(){
    cout<< "the value of 5+5 is :"<<function_1(5,5) <<endl;
    cout<< "the value of 5.2 + 4.8 is :"<<function_1(5.2f,4.8f) <<endl; //  (5.2) is not a float it is a double,  (5.2f) is a float because "f"
    cout<<endl;
    return 0;
}
