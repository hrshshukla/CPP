#include <iostream>
#include <string>
// Struct VS Array
// You may think ARRAY looks better, but Struct have better management of data 

using namespace std;

int main() {
    // --- Using Arrays---                              |  --- Using Structs---
    
    // Arrays to store data for 2 students              |  // Define individual structs for each student
    string names[2] = {"Alice", "Bob"};                 |  struct Student {
    int ages[2] = {20, 22};                             |      string name;
    float marks[2] = {85.5, 90.0};                      |      int age;
                                                        |      float marks;
    /* Display the details for arrays */                |  };
    cout << "Using Arrays :\n";                         |  
    for (int i = 0; i < 2; i++) {                       |  // Create and assign values to individual structs
        cout << "Student " << i + 1 << ":\n";           |  struct Student student1, student2;
        cout << "Name: " << names[i] << endl;           |  student1.name = "Alice";
        cout << "Age: " << ages[i] << endl;             |  student1.age = 20;
        cout << "Marks: " << marks[i] << endl << endl;  |  student1.marks = 85.5;
    }                                                   |  
                                                        |  Student student2;
                                                        |  student2.name = "Bob";
                                                        |  student2.age = 22;
                                                        |  student2.marks = 90.0;
                                                        |  
                                                        |  // Display the details for each student
                                                        |  cout << "Using Structs :\n";
                                                        |  cout << "Student 1:\n";
                                                        |  cout << "Name: " << student1.name << endl;
                                                        |  cout << "Age: " << student1.age << endl;
                                                        |  cout << "Marks: " << student1.marks << endl << endl;
                                                        |  
                                                        |  cout << "Student 2:\n";
                                                        |  cout << "Name: " << student2.name << endl;
                                                        |  cout << "Age: " << student2.age << endl;
                                                        |  cout << "Marks: " << student2.marks << endl << endl;
                                                        |
    return 0;                                           |  return 0;
}
