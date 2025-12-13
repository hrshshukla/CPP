#include <iostream>
// What is FUNCTION ?
// A function perform specific task. so that we do not waste time doing the same thing again n again.

using namespace std; 

int sum(int a, int b){
    int c = a+b;
    return c;
}

int main(){
    int num1, num2;

    cout<< "Enter first number  : "; 
    cin>>num1;

    cout<< "Enter second number  : "; 
    cin>>num2;

    cout<< "The sum of "<<num1<< " + "<<num2<< " is =  "<<sum(num1, num2) <<endl;

    return 0;
}