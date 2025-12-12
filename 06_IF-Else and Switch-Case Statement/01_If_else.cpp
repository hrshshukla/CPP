#include <iostream>
// For condtitions we use :
// IF-ELSE
// IF-ELSE-IF ladder
// Switch Case
using namespace std;

int main(){
    int age;
    cout<< "Enter age : \t";
    cin>>age;

    if (age>18){
        cout<< "You're an adult" <<endl;
    }

    else if (age==18){
        cout<< "You're going to be adult next year" <<endl;
    }
    
    else
    {
        cout<< "You're a kid" <<endl;
    }
    
    
    return 0;
}