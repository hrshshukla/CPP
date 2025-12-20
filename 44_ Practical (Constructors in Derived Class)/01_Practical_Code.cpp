#include <iostream>
/* SYNTAX : class derived {                                      <---------------Derived Class

        derived (a, b, c, d): base1(a), base(b){                 <---------------Derived Class Constructor

            {constructor body}

        }
 }

Case1:
    class B: public A{
    -----> Order of execution of constructor -> first A() then B()
    };

Case2:
    class A: public B, public C{
    ------> Order of execution of constructor -> B() then C()  A()
    };

Case3:
    class A: public B, virtual public C{
    ------> Order of execution of constructor -> C() then B() and A()
    };

*/

using namespace std;

class Base1{
     int num_base1;

 public:
        Base1(int num){
            num_base1 = num;
            cout << "Base1 Constructor Called SUCCESSFULLY " << endl;
        }

        void printBase1(void){
            cout << "The value of Base1 is : " << num_base1 << endl;
        }
     
};

class Base2{
     int num_base2;

 public:
        Base2(int num2){
            num_base2 = num2;
            cout << "Base2 Constructor Called SUCCESSFULLY " << endl;
        }

        void printBase2(void){
            cout << "The value of Base2 is : " << num_base2 << endl;
        }
};

class derived : public Base1, public Base2{
     int num1_derived, num2_derived;

 public:
        derived(int a, int b, int c, int d): Base1(a), Base2(b){
            num1_derived = c;
            num2_derived = d;
            cout << "Derived Constructor Called SUCCESSFULLY" << endl;
        }

        void printDerived(void){
        cout << "The value of Derived 1 is : " << num1_derived << endl;
        cout << "The value of Derived 2 is : " << num2_derived << endl;
        }
     
};

int main(){
    derived harsh(2, 4, 6, 8);
    harsh.printBase1();
    harsh.printBase2();
    harsh.printDerived();

    return 0;
}