#include <iostream>
// Creating Pointer Class 
// Arrow operator 
using namespace std;

class complex{
    int real, imaginary;
    
public:
    void inputData(int num1, int num2){
        real = num1;
        imaginary = num2;
    }
    
    void printData(void){
        cout << " Real Data : " << real << endl;
        cout << " Imaginary Data : " << imaginary<< endl;
    }
};

int main(){
// Types of Initialization 
//      complex c1;
//      complex *ptr_c1 = &c1;
//      complex *ptr_c1 = new complex;


    complex c1;
    c1.inputData(10,20);
    c1.printData();
    
/*-_______________________________________________________________________________*/

    cout <<endl<<"Using pointer to overwrite c1 value" << endl;
    complex *ptr_c1 = &c1;
    // ptr_c1 = &c1 (address of c1)         = Exchange the value 
    // *ptr_c1 = c1 (actual object c1)      = Overwrite the value Forcefully

    (*ptr_c1).inputData(100,200); //= c1.inputData(100, 200)
    (*ptr_c1).printData();

/*__________________________________________________________________________________*/

//  Using (->) means pointing 

//   ptr_c1->inputData = (*ptr_c1).inputData 

    ptr_c1->inputData(1,2);  
    ptr_c1->printData();    

    
    return 0;
}