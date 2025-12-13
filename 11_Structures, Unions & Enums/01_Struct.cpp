#include <iostream>
// What is (typedef) : (typedef) is used for making shortcuts 
// Example : typedef struct student{} stdnt; now we can use "std" instead of "struct student"
//             ^                       ^
using namespace std;

// Creating a struct with typedef
typedef struct student {
    /* data */
    string name;
    int age;
    float code;
    
} stdnt;// Alias Declaration 

int main() {
    // Now I can create struct in TWO ways
    stdnt harsh1;
    student harsh2;

    harsh1.name = "harshshukla";
    harsh1.age = 18;
    harsh1.code = 101;

    // Displaying the details
    cout << "Name: " << harsh1.name << endl;
    cout << "Age: " << harsh1.age << endl;
    cout << "Code: " << harsh1.code << endl;

    return 0;
}
