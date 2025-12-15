#include <iostream>
// Agar hum ek class banaye (EmployeeE_Group) naam ki aur Jab jab  ek naya object(employee) ko create kre 
// Toh hum chahege ki kitne employee hai humari company me unko count krna 
// Aur agar hum (int count )ka use kre SHOP wale code ki tarha toh har baar jab ek naya object(employee) create hoga wo waps 0 se start hoga = har employee number 0 hoga 
// Mtlb employee id of suresh = 0, ramesh = 0, nilesh = 0

// Iske liye hum use krege (STATIC) variable ka jo ki value store krta jayega
// Mtlb employee id of suresh = 1, ramesh = 2, nilesh = 3
using namespace std;

class employee_group{
     int employee_ID; 
     static int count_employee_num; // This is called "Static data member" of class Aur ye ab CLASS ke hisab se chalege na ki OBJECT q ki object chahe jo ho iski value static hi rahegi

 public:
    void input_id(void){
        cout << "Enter emoployee ID " << endl;
        cin>>employee_ID;

        count_employee_num++; // Jab jab ek naya employee add hoga employee ID ki value +1 hojayegi
    }

    void print_id(void){
        cout << "The ID of this emloyee is " << employee_ID << " And the employee number is "<< count_employee_num<< endl;
    }
};

int employee_group :: count_employee_num = 0; // q ki static varible ko class ke andar naa hi likh sakte na hi uski value set kr sakte 

int main(){
    employee_group suresh, ramesh, nilesh;
    
    suresh.input_id();
    suresh.print_id();
    
    ramesh.input_id();
    ramesh.print_id();

    nilesh.input_id();
    nilesh.print_id();


    return 0;
}