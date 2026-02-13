#include <iostream>
#include <fstream>
#include <string>

// Abhi tak humne 2 alag-alag file banayi thi ek pe (Read) kr rhe the aur doosre pe (Write) 
// Lekin ab Ek hi single file me data pehle (Write) karege aur phir usi file ko (Read) karege 

// LEARNING : 
//-----> out<<"My name is :" << name; 
//-----> in<<"My name is :" << name;  
//-----> out.close() means ab mujhe file me koi bhi data write nhi krna hai ----> program se koi bhi data ouflow nhi krna hai 
//-----> in.close() means ab mujhe file se koi bhi data read nhi krna hai ----> program me koi bhi data inflow nhi krna hai 
using namespace std;

int main(){
    // Writing data 
    string full_string = "Harsh Shukla";
    ofstream out("03_File_Read_and_Write_in_One_Program.txt");

    out<<"My name is : "<<full_string;
    out.close();

    // Now Reading, ab file me jo bhi data tha usko doorei string me dalege 
    string duplicate_name;
    ifstream in("03_File_Read_and_Write_in_One_Program.txt");

    getline(in, duplicate_name);
    in>> duplicate_name;
    in.close();
    
    // Printing the data inside (duplicate_name) 
    cout << duplicate_name << endl;
    return 0;
}