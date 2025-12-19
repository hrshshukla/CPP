#include <iostream>
#include <string>
// SYNTAX : class {{derived class name}} : {{visibility-mode}} {{Base class name}}
// IMPORTANT 
// -------> Private Visibilty : means Public member os BASE class becomes Private members of Derived class
// -------> Public Visibilty : means Public member os BASE class becomes PUBLIC members of Derived class
// -------> If you dont declare {{visibilty-mode}} then {{visibilty-mode}} = PRIVATE by default means public of BASE becomes private of DERIVED
// -------> Also we cannot accsess or copy (Inherit) the private members of BASE class into Derived class 


using namespace std;
int harshu = 23;
// Base-Class
class Employees{
 public:
     int ID;
     float Salary;
    Employees(int input_ID){
        ID = input_ID;
        Salary = 78.4f;
    }
    Employees(){}

};

// Derived Class : this class is derived from (class Employees)
class Programmer : public Employees{
 public:
    Programmer(int input_programmer_id){
        ID = input_programmer_id;
        Salary = 209.1f;
    }
    string coding_language = "C++";
     
};


int main(){
    Employees harsh(1), Adarsh(2);
    cout << "Code Number = " << harsh.ID << " and Salary is =  " << harsh.Salary <<endl;
    cout << "Code Number = " << Adarsh.ID << " and Salary is = " << Adarsh.Salary <<endl;

    Programmer harshnew(99);
    cout << "Code Number = " << harshnew.ID << " Coding Language = " << harshnew.coding_language <<" and Salary is =  " << harshnew.Salary <<endl;

    return 0;
}