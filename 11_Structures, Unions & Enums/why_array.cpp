#include <iostream>
// Why to use ARRAY over STRUCT
using namespace std;


int main() {/*
    //          --- Using Array ---                                 |  --- Using Struct ---
                                                                    |
    // Array to store data for 3 numbers                            |  // Define individual structs for each number
    int numbers[3] = {5, 10, 15};                                   |  struct Number {
                                                                    |      int value;
    cout << "Using Array:\n";                                       |  };
    // Display the numbers from the array                           |
    for (int i = 0; i < 3; i++) {                                   |  struct Number num1, num2, num3;
        cout << "Number " << (i + 1) << ": " << numbers[i] << endl; |  num1.value = 5;
    }                                                               |  num2.value = 10;
                                                                    |  num3.value = 15;
                                                                    |
                                                                    |  cout << "\nUsing Struct (Without Array):\n";
                                                                    |  // Display the numbers from individual structs
                                                                    |  cout << "Number 1: " << num1.value << endl;
                                                                    |  cout << "Number 2: " << num2.value << endl;
                                                                    |  cout << "Number 3: " << num3.value << endl;
                                                                    |
    return 0;                                                       |  return 0;
}


__________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
Aspect                  | Array                                                                                     | Struct                                                                                         
-------------------------|------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------
Simplicity and Efficiency| Ek array ko use karke aap ek hi type ke multiple items ko store kar sakte ho.            | Agar aap struct use karte hain, toh aapko har ek value ke liye ek alag struct banana padta hai.
Code Readability         | Array se code simple aur readable hota hai.                                              | Structs ka use karna thoda complex hota hai jab multiple similar values ko manage karna ho, kyunki aapko har ek struct ko individually handle karna padta hai.
Data Management          | Agar aapke paas same type of data ho                                                     | Structs zyada suitable hote hain jab aapke paas heterogeneous data ho (different types of data). 
Scalability              | Agar aapko similar type ke data items ko handle karna, toh array zyada convenient hai.   | Multiple structs ko handle karna aur unke saath operations perform karna zyada complex aur less scalable hota hai.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Saaf Saaf:
- Array: Simple aur efficient for handling similar type ke multiple items. 
- Struct: Useful for complex data structures with different types of data

Isliye, jab aapko multiple similar items ko manage karna ho, toh array ek better aur simpler option hota hai.
*/