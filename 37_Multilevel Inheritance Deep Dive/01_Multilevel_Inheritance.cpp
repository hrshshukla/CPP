#include <iostream>
// Multilevel Inheritance means Class A ----> Class B -----> Class C
// * Class A is BASE of Class B 
// * Class B is BASE of Class C

// Likewise student ----> exam ----> result

using namespace std;

class student{
    protected:
        int rollNumber;

    public:
        void set_rollNumber(int n);
        void print_rollNumber(void);
};

void student :: set_rollNumber(int n){
    rollNumber= n;
}

void student :: print_rollNumber(void){
    cout << "Roll Nunber :" << rollNumber << endl;
}

class exam : public student{

    protected:
        int accounts;
        int business_std;    

    public:    
        void set_numbers(int num_1, int num_2);
        void print_numbers(void);
};

void exam :: set_numbers(int num_1, int num_2){
     accounts = num_1;
     business_std = num_2;
}

void exam :: print_numbers(void){
     cout << "Marks in Accounts : " << accounts << endl;
     cout << "Marks in Business : " << business_std << endl;
}

class result : public exam{
     float percentage;
 public:
     void setPercentage(void);
     void print_percentage(void);
};

void result :: setPercentage(void){
     percentage = (accounts + business_std) / 2.0 ;
}

void result :: print_percentage(void){
    print_rollNumber();
    print_numbers();
    cout << "Percentage =  " << percentage << " %" << endl;

}

int main() {
    result harsh;
    harsh.set_rollNumber(89);
    harsh.set_numbers(78, 94);
    harsh.setPercentage();

    harsh.print_percentage();
    exit;

    return 0;
}