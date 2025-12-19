#include <iostream>
// What is heap and Stack memory
// when we creata a object it is stored in STACK (Temporary Mmeory) as default aur us object ka use khatam hone ke baad automatically system delete kr deta hai
// Lekin jub hum (new) ka use krte hai to memory me khud ka ek storege banate hai aur usko system automatically delete nhi krta, isliye us object ko delete krne ke liye hum (delete &obj_name ks use karte hai) 

using namespace std;
int counter = 0;

class number{

public:
     number(){
        cout << "This is object number " << ++counter << endl;
     }

    ~number(){
        cout << "Object number " << counter-- << " destroyed SUCCESSFULLY" << endl;
        
    }
};

int main(){
    cout << "WELCOME TO MAIN FUNCTION" << endl; 
    cout << "Creating an Object"  << endl;  
    number obj_1; 

    delete &obj_1; // Manually destroying objects : as this object is stored in temporary memory and will automatically deleted then deleting manually is unnecessary
 // delete &(obj_name)  <----- ye sirf tabhi usefull hai jab heap memory me object store krete hai

    {   
        cout << "Creating 2 local objects" << endl;
        number obj_3, obj_4; 
    }
    cout << "EXITING FROM MAIN FUNCTION" << endl; 
    return 0;
}