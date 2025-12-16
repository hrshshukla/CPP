#include <iostream>
#include <iomanip>
// Ek aisa program jo Bank deposit pe COMPOUND INTEREST rate nikale 
// Aur 2 constructor ek jo integer intrest le example (4) = 4% aur doosara constructor float le (0.04) = 4%
// Learning 
//          : Agar Ek (default constructor) banaye ho to ek object bhi banana jo ki contrstuctor ko koi argument pass na kre, Ya phir
//          : Deafult constructor banao hi mat. No Default constructot = No Blank Object

//          : {} used for Definition. Asan bhasa me convert declaratio to Definition 
//          : Bank_Deposit() = Ye hai declaration 
//          : Bank_Deposit(){} = Ye hai definition 

using namespace std;

class Bank_Deposit{
     int Principal;
     int Years;
     float Interest_Rate;
     float ROI;

 public:
    Bank_Deposit(){} // Default constructor
    Bank_Deposit(int p, int y, float r);
    Bank_Deposit(int p, int y, int R);
    void print(){
            cout << fixed << setprecision(2);
            cout << "Principal is " << Principal << endl
                 << "Total Amount after " << Years << " year "
                 << " With Interest Rate of " << Interest_Rate
                 << " = " << ROI;

     
    }
};

Bank_Deposit ::  Bank_Deposit(int p, int y, float r){
    Principal = p;
    Years = y;
    Interest_Rate = r;

// Part of Loop
    ROI = Principal; 
    for (int i = 0; i < Years; i++)
    {
        ROI =  ROI * (1+Interest_Rate);
    }
    
}

Bank_Deposit ::  Bank_Deposit(int p, int y, int R){
    Principal = p;
    Years = y;
    Interest_Rate = float(R)/100;

// Part of Loop
    ROI = Principal; 
    for (int i = 0; i < Years; i++)
    {
        ROI =  ROI * (1+Interest_Rate);
    }
}

int main(){
    Bank_Deposit User_1, User_2;
    Bank_Deposit User_3; //Ye hai default constructor ke liye, Bilkul Optional hai. No Default constructot = No Blank Object

    int p, y;   
    float r; // Float Interest Input : 0.04
    int R; // Integer Interest Input : 4
    

// For user who wanna enter Interest rate in float
    cout << "Enter Principal : "; 
    cin>> p; 
    cout << "Enter Years : "; 
    cin>> y;
    cout << "Enter Interest "; 
    cin>> r;

    User_1 = Bank_Deposit(p, y, r);
    User_1.print();


// For user who wanna enter Interest rate in Integer
    cout << endl;
    cout << "Enter Principal : "; 
    cin>> p; 
    cout << "Enter Years : "; 
    cin>> y;
    cout << "Enter Interest : "; 
    cin>> R;

    User_2 = Bank_Deposit(p, y, R);
    User_2.print();
    
    return 0;
}