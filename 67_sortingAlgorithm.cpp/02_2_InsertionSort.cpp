// Video Link : https://youtu.be/XBfH1Qy1JGY
// Insertion sort : means divide the given array in two parts SORTED array part and UNSORTED array part 

// Assume arr[0] is already sorted, So arr[0] will come under SORTED array part and other elements in UNSORTED array part
// arr[0] | arr[1] arr[2] arr[3] arr[4] ...
// ------   ------------------------
//    ^             ^
// SORTED       UNSORTED

// Now take one value from UNSORTED part and start inserting it in SORTED part [compare then insert at appropriate position]
// So, if arr[0] > arr[1] then, arr[1] will come before arr[0]
// and new array will be : arr[1] arr[0] | arr[2] arr[3] arr[4]...
//                         -------------   ------------------------
//                              ^                     ^
//                            SORTED              UNSORTED

#include <iostream>
using namespace std;

void insertionSort(int *arr, int size){

    // Start from index 1 (second element) because we assume the 0th element is already "sorted"
    for (int currentIndex = 1; currentIndex <= size - 1; currentIndex++) // loop from 1 to last index
    {
        int newValue = arr[currentIndex];             // take the current element as newValue
        int sortedIndex = currentIndex - 1;           // compare it with the last sorted index (on its left)

        // Compare the newValue with each element in SORTED array and Insert the newValue at its appropriate position 
        while (sortedIndex >= 0 && arr[sortedIndex] > newValue)
        {
            arr[sortedIndex + 1] = arr[sortedIndex];  // shift the larger element to the right
            sortedIndex--;                            // check next left element in sorted part
        }

        arr[sortedIndex + 1] = newValue;              // place newValue at its correct sorted position
    }
}

// Function to print array elements
void printArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    } 
    cout << endl;
}

int main(){
    int arr[] = {7, 2, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);

    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}
