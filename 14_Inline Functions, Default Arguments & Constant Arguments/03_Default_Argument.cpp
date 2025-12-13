#include <iostream>
// We can set default value in "argument" inside a FUNCTION
// Example : int intrest(int money, int interest=10)

using namespace std;
int intrest(int money, float interest_rate=0.10){ // 0.10 = 10% interest rate
        return money*interest_rate;
}
int main(){
    int money=10000;

    intrest(money);// We are only giving "money" value because "interest_rate value" is already defined
    cout<< "Bank Balance with 10% After 1 year = "<<intrest(money)+money<<endl;


// Now I can also set custom "intrest_rate" by overwriting it 
    float intrest_rate=0.20;
    intrest(money,intrest_rate);  // Now I'm giving custom "intrest rate"   this will over write 0.10 with 0.20
     cout<< "Bank Balance with 20% interst After 1 year = "<<intrest(money, intrest_rate)+money<<endl;


    return 0;
}