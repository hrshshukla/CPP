#include <iostream>
// UNION are used to provide option 
// Provide option to choose one out of many and it will allocate storage of the option you choosed 
// Remaining other options will not go into ram 
// Helps to save storage space : As you will choose one out of many option 

using namespace std;
// Creating UNION
    union money {
        int dollars;    // (4 Byte) in dollars
        int euros;     // (4 Byte) in euros
        float pounds;   // (4 byte) in pounds
     };
     //  Total size of UNION money = 4 + 4 + 4 = 12 bytes
     // So if I only choose dollar then size of euro and pounds will not include in my code = Small code = Faster execution 

int main(){
     
    // Creating a union variable
    money payment_1;
    
    payment_1.euros   = 904;    // we are setting the value of [payment_1.euros]
    payment_1.dollars = 1000;   // here [payment_1.euros] is overwritten by [payment_1.dollars]
    // Now we can only access [payment_1.dollars] because union can only let you access one type of value

    cout<< "Payment in Dollars : "  << payment_1.dollars <<endl; // this will return [payment_1.dollars = 1000;]
    cout<< "Payment in Euro : "<< payment_1.euros <<endl; // this will also return [payment_1.dollars = 1000;]
    
    return 0;
}