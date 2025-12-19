#include <iostream>
// We will create a member (int a) inside protected then
// ---> we will inherit (int a) from Base class to derived class 
// ---> also we will prove that protected members are inaccessible by trying to access (int a) from (main funtion) which will give ERROR
using namespace std;

class base{
 private:
    int x; // <---- non accessible + non inheritable

 protected:
    int a; // <---- non accessible but inheritable 

 public:
    int b; // <---- accessible + inheritable
};

class derived : public base{
 public:
     int c;
};

int main(){
    derived obj_1;
//  obj_1.x; <----- Will give error because it is PRIVATE
//  obj_1.a; <----- Will give error because it is PROTECTED

    obj_1.b = 20;
    obj_1.c = 10;

    cout<<obj_1.b<<endl; // Output : 20
    cout<<obj_1.c<<endl; // Output : 10

    return 0;
}