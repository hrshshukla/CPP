                    
#include<iostream>
// How to print value of ARRAY using POINTER
using namespace std;

int main(){
// Printing Value of ARRAY using POINTERS
    int marks[4]= {98, 82, 63, 46};
    
    int* x= marks; // this means x stores all addresses of every block inside marks 
    cout << "The Value of marks[1]  "<<*x<<endl;
    cout << "The Value of marks[2]  "<<*(x+1)<< endl;
    cout << "The Value of marks[3]  "<< *(x+2)<<endl;
    cout << "The Value of marks[4]  "<<*(x+3)<< endl;
    cout<<endl;
    
/* Output:
value of marks [0]   :98
value of marks [1]   :82
value of marks [2]   :63
value of marks [3]   :46        */
    
    
    
// Upar wale code ko FOR Loop ki help se print krte hai
    cout<< "Printing value of marks with for loop" <<endl;
    for (int i = 0; i < 4; i++)
    { 
        cout << "The Value of marks["<<i<<"]    "<<*(x+i)<< endl;
    }
    cout<<endl;

    
/* Output:
value of marks [0]   :98
value of marks [1]   :82
value of marks [2]   :63
value of marks [3]   :46        */
    return 0;
}