#include <iostream>
// Multiple inheritance : in this there is one derived class which is inherited from multiple classes
// SYNTAX : class (derived class name) : (visibility-mode) (base_1 class name), (visibility-mode) (base_2 class name)

using namespace std;
class base_1{
    protected:
        int base_1;

    public:
        void setValue_base_1(int num_1){
            base_1 = num_1;
        }
        void print_base_1(void){
            cout << "The value of Base class 1 is :" << base_1 << endl;
        }
};

class base_2{
    protected:
        int base_2;

    public:
        void setValue_base_2(int num_2){
            base_2 = num_2;
        }
        void print_base_2(void){
            cout << "The value of Base class 2 is :" << base_2 << endl;
        }
};

class derived : public base_1, public base_2{
        int derived_3;

    public:
        void display(void){
            print_base_1();
            print_base_2();
            cout << "The value of Derived 3 is = " << base_1 + base_2<< endl;
        }
};


int main(){
    derived value;
    value.setValue_base_1(10);
    value.setValue_base_2(20);
    value.display();

    return 0;
}