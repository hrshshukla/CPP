#include <iostream>
using namespace std;
// -- Total Swaps          : size - 1 (in the best case when the array is already sorted)
// -- Total Comparisons    : size(size - 1) / 2 --> Worst-case scenario
// -- Time Complexity      : O(n²) in worst and average cases
// -- Stable?              : Yes, Bubble Sort is stable (same value elements retain their order)
// -- Adaptive?            : Yes (if optimized), with a flag to detect if the array is already sorted

// Formula to decrease numbers of comparisons = arrSize - i - 1
// As array is getting more sorted in every loop, we need to do less comparisons and less swaping 

// Example : arrSize = 6  
// -- Pass 1 : 6 - 0 - 1 = 5 comparisons <--- swaped 5 elements 
// -- Pass 2 : 6 - 1 - 1 = 4 comparisons <--- swaped 4 elements 
// -- Pass 3 : 6 - 2 - 1 = 3 comparisons <--- swaped 3 elements
// -- Pass 4 : 6 - 3 - 1 = 2 comparisons <--- swaped 2 elements
// -- Pass 4 : 6 - 4 - 1 = 1 comparisons <--- swaped 1 elements

// -- Pass 4 : 6 - 5 - 1 = 0 comparisons <--- loop will not run, because we dont need to sort the last element as it was automatically sorted. 


void bubbleSort(int* arr, int size){  

    // STEP 1 : Run loop for number of size - 1
    for (int i = 0; i < size - 1; i++) 
    {
        // STEP 2 : In each pass, compare adjacent elements till the last element
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]){   // STEP 3 : If the current element is greater than the next one
                swap(arr[j], arr[j + 1]); // STEP 4 : Swap both elements
            }
        }
    }
    
}

void printArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int main(){
    int arr[] = {1,88,89,989,889,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    bubbleSort(arr, size );
    printArray(arr, size);
    
    return 0;
}