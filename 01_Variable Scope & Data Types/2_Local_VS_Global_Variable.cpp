#include <iostream>

/*---------------------|----------------------------------------------------------|-----------------------------|----------------------------------------|
| Type of Variable     | Definition                                               | Scope                       | Location of Creation                   |
|----------------------|----------------------------------------------------------|-----------------------------|----------------------------------------|
| Global Variable      | 1. Created above `int main()`                            | Can be used anywhere        | Created outside of any function        |
|                      | 2. Accessible throughout the program                     |                             |                                        |
|                      | 3. Persistent for the program’s lifetime                 |                             |                                        |
|----------------------|----------------------------------------------------------|-----------------------------|----------------------------------------|
| Local Variable       | 1. Created inside `int main()` or any function           | Used inside the specific    | Created inside a function (like        |
|                      | 2. Scope is limited because it is inside function        | function it is declared in  | `int main()` or any other                 |
|                      | 3. Temporary, exists only during function execution      |                             |                                        |
|----------------------|----------------------------------------------------------|-----------------------------|----------------------------------------|          */


using namespace std;

int a = 4; // Global Variable

int main(){
    int a = 5; // Local Variable
    cout<<"the value of global variable a is :"<<a;     // Output = 5 because local variable have more priorty 
    return 0;
}