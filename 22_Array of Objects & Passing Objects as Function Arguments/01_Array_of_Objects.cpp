#include<iostream>
// Ab hum ARRAY use krege OBJECT create krne ke liye 
// Abhi tak Jo manually krte the 
using namespace std;

class employees_group {
    int employee_ID;
    int employee_salary;

public : 
    
    void input_ID (void){
    cout << "Enter Employee ID : "<< endl;
    cin >> employee_ID;
    }
    
    void print_ID (void) {
    cout << "The Employee ID is  :  " << employee_ID << endl;
    }
    
};
int main() {

    employees_group Facebook[10]; // Yaha Pe 0-10 = 11 employee ban gye 
    
    // Manually function ko call krke value store krna 
    Facebook[0].input_ID(); // Facebook Employee group ke  Jo employeeand num 0 hai Uski ID 
    Facebook[0].print_ID();
    
    // AUTOMATIC : For loop ka use krege baki 9 employee ki ID store krne ke liye 
    for (int i = 0; i<9; i++){
        Facebook[i].input_ID();
        Facebook[i].print_ID();
    }
    
    return 0;
}