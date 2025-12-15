#include <iostream>
// Hum Static Function banate hai taki us function ki help se hum sabhi STATIC VARIBALE ko access kr sake 

using namespace std;

class employee_group{
     int employee_ID; 
     static int count_employee_num; 
     
 public:

    void input_id(void){
        cout << "Enter emoployee ID " << endl;
        cin>>employee_ID;

        count_employee_num++;  
    }

    void print_id(void){
        cout << "The ID of this emloyee is " << employee_ID << " And the employee number is "<< count_employee_num<< endl;
    }
    
// Function to Only access STATIC VARIABLES of CLASS  this function is also called STATIC FUNCTION
    static void print_static_variable(void){

        cout << "The value of \"count_employee_num\" is :" << count_employee_num << endl;
     // cout << "Print employee_ID" << employee_ID  << endl;  <---- ERRROR dega q ki ye (employee_ID) STATIC VARIABLE nhi hai
    }
};

int employee_group :: count_employee_num = 0; // q ki static varible ko class ke andar naa hi likh sakte na hi uski value set kr sakte 

int main(){
    employee_group suresh, ramesh, nilesh;
    
    suresh.input_id();
    suresh.print_id();
    employee_group::print_static_variable(); // Aise call krte hai STATIC FUNCTION ko 
    
    ramesh.input_id();
    ramesh.print_id();
    employee_group::print_static_variable(); 

    nilesh.input_id();
    nilesh.print_id();
    employee_group::print_static_variable(); 


    return 0;
}
