#include <iostream>
// What is ENUM ?
// Ye ek set of DATA ko INTEGER Index me represent karta hai.
// Ye tab use hota hai jab aapko kisi set of data ko numbers index me dekhna ho jaise days of the week.
// Monday = 1, Tuesday = 2
using namespace std;

int main(){
    enum week{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    cout<<"The value of Monday is    :"<< Monday <<endl;    // Monday = 0
    cout<<"The value of Tuesday is   :"<< Tuesday <<endl;   // Tueday = 1....
    cout<<"The value of Wednesday is :"<< Wednesday <<endl;
    cout<<"The value of Thursday is  :"<< Thursday <<endl;
    cout<<"The value of Friday is    :"<< Friday <<endl;
    cout <<endl;

    


    // Next 
    week day1 = Monday; // day1 = Monday means, day1 = 0 
    cout<<"Value of day1 : "<< day1 <<endl; // Output = 0
    cout <<endl;

    // True and False
    cout<<"Is day1==2 ?  : "<< (day1==2) <<endl; // It will print (0) because (0==2) is false

    return 0;
}