// DRY RUN below the code -> just 5 lines only 
// REMEMBER : myMap[10] = 0 
//                   ^    ^
//                  key  value

#include <iostream>
#include <map>
using namespace std;

int count(int inputNum, int arr[], int size){
    map<int, int> myMap;
    for (int i = 0; i < size; i++)
    {
        myMap[arr[i]]++; // this will search for myMap[arr[i]]
    }                    // if myMap[arr[i]] not found, then it will automatically create -> key = arr[i] & value = 0 (default) 
                         // and then incerement it also -> ++

    return myMap[inputNum];
}

int main(){
    int arr[] = {10, 20, 20, 10, 10, 50};
    const int size = sizeof(arr)/sizeof(arr[0]);

    
    int number = 10;
    cout << count(number, arr, size) << endl;

    return 0;
}


// +-----------+----------+-----------------------------------------------------------+-------------------------+
// | Iteration | arr[i]   | Action                                                    | Map Content (key: value) |
// +-----------+----------+-----------------------------------------------------------+-------------------------+
// | 0         | 10       | Key 10 not found → create 10:0 → increment to 1           | {10: 1}                 |
// +-----------+----------+-----------------------------------------------------------+-------------------------+
// | 1         | 20       | Key 20 not found → create 20:0 → increment to 1           | {10: 1, 20: 1}          |
// +-----------+----------+-----------------------------------------------------------+-------------------------+
// | 2         | 20       | Key 20 found (value=1) → increment to 2                    | {10: 1, 20: 2}         |
// +-----------+----------+-----------------------------------------------------------+-------------------------+
// | 3         | 10       | Key 10 found (value=1) → increment to 2                    | {10: 2, 20: 2}         |
// +-----------+----------+-----------------------------------------------------------+-------------------------+
// | 4         | 10       | Key 10 found (value=2) → increment to 3                    | {10: 3, 20: 2}         |
// +-----------+----------+-----------------------------------------------------------+-------------------------+
// | 5         | 50       | Key 50 not found → create 50:0 → increment to 1           | {10: 3, 20: 2, 50: 1}   |
// +-----------+----------+-----------------------------------------------------------+-------------------------+