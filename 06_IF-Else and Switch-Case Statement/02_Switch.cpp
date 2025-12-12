#include <iostream>
// CASE are used for special case like your age is "69" thats unique
using namespace std;

int main(){
    int age;
    cout<< "Enter age : \t";
    cin>>age;

    switch (age)
    {
    case 69: // A unique special Case
        cout<< "you are 69 " <<endl;
        break;

    case 0 ... 17: // means from 0 to 17 
        cout<< "you are less than 18" <<endl;
    
    default:
        break;
    }
    return 0;
}