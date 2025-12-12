#include <iostream>
// Calculate : size of a FLOAT, DOUBLE and LONG DOUBLE  
// Answer : cout<<"The stodring capacity of Variable is"<<sizeof(variable_name like "x" OR variable_value "0.4");
// LONG DOUBLE storage > DOUBLE storage > FLOAT storage
using namespace std;

int main(){
    float x = 40.5F;
     cout<<"The size of 40.5 is :"<<sizeof(40.5)<<endl;      // This is by default 40.5 is a DOUBLE = 8
     cout<<"The size of 40.5f is :"<<sizeof(40.5f)<<endl;    // This is a Float = 4
     cout<<"The size of 40.5F is :"<<sizeof(40.5F)<<endl;    // This is a Float = 4
    


    long double y = 40.5L;
    cout<<"This is long double"<<endl;
    cout<<"The size of 40.5 is :"<<sizeof(40.5)<<endl;       // This is by default 40.5 is a DOUBLE = 8
    cout<<"The size of 40.5l is :"<<sizeof(40.5l)<<endl;     // This is a LONG DOUBLE = 12
    cout<<"The size of 40.5L is :"<<sizeof(40.5L)<<endl;     // This is a LONG DOUBLE = 12
    return 0;
}