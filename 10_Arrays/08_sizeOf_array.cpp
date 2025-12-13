#include <iostream>
// keyword : sizeof() 
// Ye return krta hai space of (bits) allocated or occupied by the value
// jaise (int = 4 bits)   aur  (char = 1 bits)

// Hence, sizeof(array) ---> ye cheej directly array ki size nhi degi 

using namespace std;

int main(){
    int array[] = {12, 34, 1, 23, 79, 86};

    int size_Of_Array = sizeof(array) / sizeof(array[0]); // array[0] = 4 bits          array = (6 elements) * 4 bits = 24 bits
//  int size_Of_Array =   2  /  4     = 6 

    cout << "SIZE : " << size_Of_Array << endl;

    return 0;
}