#include <iostream>
// Creating Pointer Class 

using namespace std;
static int i=0;
class complex{
    int real, imaginary;
    
public:
    void inputData(int num1, int num2){
        real = num1;
        imaginary = num2;
    }
    
    void printData(void){
        
        cout << " ptr["<<i<<"] "<< endl;i++;
        
        cout << " Real Data         : " << real << endl;
        cout << " Imaginary Data    : " << imaginary<< endl;
        cout << endl;
    }
};

int main(){

    complex *ptr = new complex[4]; // Ye jo 4 objects bane hai inka koi specific naam nhi hai like complex.0, complex.1, etc.
    // Instead, they are accessed through indices of the array. as ptr[0], ptr[1], ptr[2], and ptr[3]

    //ptr[0]
    ptr->inputData(1,2);
    ptr->printData();

    //ptr[1]
    (ptr+1)->inputData(3,4);
    (ptr+1)->printData();

    //ptr[2]
    (ptr+2)->inputData(5,6);
    (ptr+2)->printData();

    //ptr[3]
    (ptr+3)->inputData(6,7);
    (ptr+3)->printData();

    


    
    return 0;
}