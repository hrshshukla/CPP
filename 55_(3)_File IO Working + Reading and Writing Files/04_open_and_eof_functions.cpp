#include <iostream>
#include <fstream>
#include <cstring>
// Advance I/O Operation : open() and eof() functions + using eof() with while loop 

// Abhi tak humne dekha ki file ko open krne ke 2 method hote hai 
// (1) Using the constructor <------Ye humne complete kr lia hai 
// (2) Using the member_function open() of the class

// Ab hum use krege open() file ko open krne ke liye aur usme data (Read and Write) krne ke liye
// eof() function ka bhi use krege, (eof) means end of file.
// Aur file ke har line mtlb from start to end poori file ke data ko read krne ke liye eof() + loop uske krege

using namespace std;

int main(){
//  ofstream outObj("file_name"); -------> Using Constructor to Open file 
    ofstream outObj;
    outObj.open("04.1_open_and_eof_functions copy.txt");// ------> Using member_function open() to open the file
    
    outObj<<"Sending Data to File (This is 1st Line)\n"; // ------> Instead of making (string) and doing (outObj<<string;) mai ab data directly pass kr rha hu
    outObj<<"Sending Data to File (This is 2nd Line)\n"; 
    outObj<<"Sending Data to File (This is 3rd Line)\n"; 

    outObj.close(); //----> Although data send hone ke baad program aur file ke beech ka connection automatically terminate hojata hai, Par its a good practice to close()
    

// Now, Reading the data + Using eof() + eof() with Loops to print every line inside the file

    string empty_string;
    ifstream inObj;
    inObj.open("04.1_open_and_eof_functions copy.txt");

    // Using eof() + eof() with Loops 
    while (inObj.eof()== 0)  // -------> collect all the lines and words inside the until the (last word == 0) means until (last word = NULL Character)
    {
        getline(inObj, empty_string); // ------> ab jitna bhi data collect hua hai usko (empty_string) me daal do 
        cout << empty_string<<endl;   // ------> Print the (empty_string)
    }

    inObj.close();
    
    return 0;
}