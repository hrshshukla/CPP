#include <iostream>
// Detail : https://chatgpt.com/share/6714a758-9094-8013-9600-9684cd95dcbb
// Stack memory ka size small hota hai Aur STACK OVERFLOW ho sakta hai
// Heap ka size large hota hai 
using namespace std;

int main() {
// STACK MEMORY

    // Trying to allocate a large array on the stack (may cause stack overflow)
    int arr[1000000];  // Stack memory may not be enough for this large array

    for (int i = 0; i < 1000000; i++) {
        arr[i] = i;
    }

    cout << "Array allocated on the stack and initialized successfully." << endl;

//____________________________________________________________________________________________________

// HEAP MEMORY 
    int* arr = new int[1000000];  // Heap memory is much larger, so this will work

    for (int i = 0; i < 1000000; i++) {
        arr[i] = i;
    }

    cout << "Array allocated on the heap and initialized successfully." << endl;

    // Free the allocated heap memory
    delete[] arr;

    
    return 0;
}
