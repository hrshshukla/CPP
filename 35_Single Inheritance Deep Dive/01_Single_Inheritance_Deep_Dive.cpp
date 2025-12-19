#include <iostream>
// In this deep dive we are going to dicover 3 things, well I have already studied this :
// ------> Private member of BASE class cannot be inherited, But we can access it by creating a function inside BASE class and then we can pass that to DERIVED class
// ------> 2nd Method : to access private members of BASE class is, Make the DERIVED class FRIEND class of BASE class 

// And this code all about : Creating BASE & DERIVED class making there members and passing accross each other.
using namespace std;

class Base{
     int data1;
 public:
     int data2;
     void setValue();
     int returnData1();
     int returnData2();
     
};

void Base :: setValue(){
     data1 = 5;
     data2 = 100;
}

int Base :: returnData1(){
     return data1;
}

class Derived : public Base{
     int data3;
 public:
     void process();
     void print();
};

void Derived :: process(){
     data3 = returnData1() * data2;
}

void Derived :: print(){
     cout << "The value of Data 1 is " << returnData1() << endl
          << "The value of Data 2 is " << data2 << endl
          << "The value of Data 3 is " << data3 << endl;
}

int main(){

    Derived obj_1;
    obj_1.setValue(); // <--- Run without this line : If we do not call this function then (print) and (process) function will give garbage value as value of data1 and data2 is not set 
    obj_1.process();
    obj_1.print();
    return 0;
}