#include <iostream>
// What is PRECEDENCE : It means which operator wil be solved first 
// What is ASSOCIATIVITY : It means if two opereators of same level ex: "+ -" then how will they solved
// if a equation is : 5-4+3 "Left > Right"

// Arthematic Operators: 
/*-----------------------------+-----------------------------------------+--------------------+
| Operators & Precedence       | Names                                   | Associativity      |
+------------------------------+-----------------------------------------+--------------------+
| `()`                         | Parentheses (Grouping expressions)      | Left to Right      |
+------------------------------+-----------------------------------------+--------------------+
| `++`, `--`, `+`, `-` (Unary) | Increment, Decrement, Unary Plus, Minus | Right to Left      |
+------------------------------+-----------------------------------------+--------------------+
| `*`, `/`, `%`                | Multiplication, Division, Modulus       | Left to Right      |
+------------------------------+-----------------------------------------+--------------------+
| `+`, `-`                     | Addition, Subtraction                   | Left to Right      |
+------------------------------+-----------------------------------------+--------------------+*/

using namespace std;

int main(){
    int a= 5;
    int b= 6;
    int c= a*5+b-24/36; // Automatic Apply Precedence Table
    cout<<c<<endl;


    // Make own Custom Precedence
    int x= 5;
    int y= 6;
    int z= ((((x*5)+y)-24)/36); // Multiply > Addition > Substraction > Division
    cout<<z<<endl; 

    return 0;
}