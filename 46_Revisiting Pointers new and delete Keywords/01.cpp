#include <iostream>
// Using (NEW) and (DELETE) 
// LEARNING :
//----------> We can say :  cout << " Value of arr[1] = " << *(arr+1) << endl; 
//----------> 

using namespace std;

int main(){
// Basic Pointer
    cout << endl << "Using Basic Pointer " << endl;
    int a = 10;
    int* ptr = &a;
    *ptr = 300;
    
    
    cout << " ptr =  " << *(ptr) << endl;

// Now (NEW) and (DELETE)
    cout << endl << "Using New Keyword " << endl;
    int* ptr2 = new int (30);
    cout << " ptr2 =  " << *(ptr2) << endl; // ptr2 = 30
    
// With Array 
    cout << endl << "Using New Keyword + Array " << endl;
    int* arr = new int [4];

    // Initialization 
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    // Printing
    cout << "a[0]" << arr[0] << endl  // a[0] = 10
         << "a[1]" << arr[1] << endl  // a[1] = 20
         << "a[2]" << arr[2] << endl; // a[2] = 30



//  DELETE keyword 
    cout << endl << "Using DELETE keyword" << endl;
    // delete arr;  ----> Half Array will be deleted 

    delete[] arr;   // Use [] To Delete all the values of array / block

    cout << "a[0]" << arr[0] << endl  // a[0] = Garbage Value because (arr) is deleted 
         << "a[1]" << arr[1] << endl  
         << "a[2]" << arr[2] << endl; 
        


    // LEARNING
    cout << endl << "LEARNING" << endl;
    *(arr)= 10;
    *(arr+1)= 20;
    *(arr+2)= 30;

    
    cout << "arr[0] = " << *(arr) << endl;    // a[0] = 10
    cout << "arr[1] = " << *(arr+1) << endl;  // a[1] = 20
    cout << "arr[1] = " << *(arr+2) << endl;  // a[2] = 30
    return 0;
}