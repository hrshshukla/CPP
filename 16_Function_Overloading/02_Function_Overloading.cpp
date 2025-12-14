
#include<iostream>
// Agar function ki input value ko change bhi krde mtlb int --> float 
// phir bhi value int hi ayegi q ki 
// Output value function ke Type pe depend krti hai na ki input ke type pe
// Agar int add(float x, float y) hai toh wo int he return krega float nhi.
using namespace std;

int add(float x, float y){ // Yaha maine input format float kr dia 
    cout << "Using 2 Arguments" << endl;
    return x+y;
}

int add(int x, int y, int z){ 
    cout << "Add fuction for 2 Arguments" << endl;
    return x+y+z;
}
int main(){
    
    cout << "The Value of 5 + 10 is :" <<add(5,10)<< endl; // Phir bhi int hi return hoga 
    cout << "The Value of 5 + 10 + 15 is :" <<add(5,10,15)<< endl;
    return 0;
}