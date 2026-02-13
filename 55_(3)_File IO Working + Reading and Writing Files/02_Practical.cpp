#include <iostream>
#include<fstream> //-------> This Header file have (Classes) which helps to perform (file_operation) 

// Usefull classes for working with C++
// (1) fstream base --> this is a (base_class) defined inside (#include<fstream>)
// (2) ifstream ------> derived from (fstream base_class) = it is a derived_class
// (3) ofstream ------> derived from (fstream base_class) = it is a derived_class

// fstream -----> (ifstream, ofstream)


// To Read and Write a file we have to Open it. And there are primarily 2 ways to open a file :
// (1) Using the constructor 
// (2) Using the member_function open() of the class

//LEARNING : 
// ---> (out<<) means data is flowing outside of program
// ---> (in>>) means data is flowing inside of program
// ---> Using : getline() to print whole line and Everytime to use getline() again n again it will move to next line

using namespace std;

int main(){
// Writing data in File using constructor
    string data_str = "written data successfully"; // ------> (data_str) ke andar ki value lege aur (file) me daal dege 
    ofstream outObject("02.1_file_to_write.txt"); // (ofstream) -------> derived_class
                                                  // (outObject) ------> object of (class ofstream) 
                                                  // ("file_to_write.txt")------->  passing (file_name) to a constructor inside (ofstream outObject)
    
    outObject<<data_str; //-----> (file) = data_str 

// Reading file 
    string empty_str; // ---> (file) se data lege aur usko (empty_string) me daal dege 

    ifstream inObject("02.1_file_to_read.txt"); // (ifstream) -------> derived_class
                                                // (inObject) ------> object of (class ifstream) 
                                                // ("file_to_write.txt")------->  passing (file_name) to a constructor inside (ofstream outObject)
    
    inObject>>empty_str; //-----> empty_str = (data inside file)
    cout << empty_str;   // Output : This  

    getline(inObject, empty_str);
    cout<< empty_str;   // Output : This data is coming from a file ---Line1

    getline(inObject, empty_str);
    cout << empty_str;   // Output : Line2

    return 0;
}