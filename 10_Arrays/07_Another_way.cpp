#include <iostream>
// SAVDHAAN IS KHEL ME ARTHIK JOKHIM SAMBHAB HAI AUR ISKI ADAT BHI LAG SAKTI HAI 
using namespace std;

int main(){

//Another way : But Not Effecient   
    int marks[4]= {98, 82, 63, 46};
    
    cout<< "Printing value of marks with for loop" <<endl;
    for(int i=0; i<4; i++){
    int* a = &marks[i];
    cout << "value of marks ["<<i<<"]   :" <<*a<< endl;
    }
    
    
 //Output 
//   value of marks [0]   :98
//   value of marks [1]   :82
//   value of marks [2]   :63
//   value of marks [3]   :46

    
    return 0;
}