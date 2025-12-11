#include <iostream>
// LEARNING : "endl" = "\n" 
// Types of OPERATORS 
                    // 1> Arthematic Operators : + - * / %
                    // 2> Assignment Operators : int char float
                    // 3> Comparision Opeartors : < > <= >= == != 

using namespace std;

int main(){
    int a = 2, b=3;
    // Arthematic Opeartors = + - * / %

            cout<<"The value of a++ is : "<<a++<<endl;
            cout<<"The value of ++a is : "<<++a<<endl;
            cout<<"The value of a-- is : "<<a--<<endl;
            cout<<"The value of --a is : "<<--a<<endl;
            
    // Assignment Operators : int char float

    // Comparision Opeartors : < > <= >= == !=
            cout<<"The value of a<b is : "<<(a<b)<<endl;    // If "a<b" condition is "true" then it will print "1" else if "false" it will print "0"
            cout<<"The value of a>b is : "<<(a>b)<<endl;
            cout<<"The value of a<=b is : "<<(a<=b)<<endl;
            cout<<"The value of a>=b is : "<<(a>=b)<<endl;
            cout<<"The value of a==b is : "<<(a==b)<<endl;
            cout<<"The value of a!=b is : "<<(a!=b)<<endl;

    // Logical Operators : && || 
            cout<<"The value of a==b && a<b is : "<<((a==b) && (a<b))<<endl; // Now only if both condition are "true", print = "1" and if anyone of them is "false", print="0"
            cout<<"The value of a==b || a<b is : "<<((a==b) || (a<b))<<endl; // Now if anyone of them is "true", print = 1, else if "false", print= 0
            cout<<"The value of !a==b is :       "<<(!(a==b))<<endl;         // INTERESTING : Is "a==b" ? No, aur result "false" dega. Lekin agar hum "!" use kre to reuslt ko hi OPPOSITE kr dega aur "true" dega
            cout<<"The value of a==b && a<b is : "<<((a>b) && (a<b))<<endl;     
            cout<<"The value of a==b && a<b is : "<<((a>b) && (a<b))<<endl;     

            
            
       

    return 0;
}