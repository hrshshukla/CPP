// In Quick sort we recursively divide the array and sort them using partition method 
// There are two Important functions : partition() and quickSort()

// (1) partiton() --> it perfoms the main sorting (comparison & swapping) and also returns the index of that particular sorted element as [return j]

// partition() :{ 10 , 20 , 5 , 3 , 9 , 7 }    -- (first_Sort) -->   { 9 , 7 , 5 , 3 , 10 , 20 }
//                ^     ^               ^                                               ^
//              [low] [low+1]         [high]                                       partitionIndex
//              pivot    i              j

// (2) quickSort() --> divides the array in two parts (left-subarray & right-subarray) accroding to the position of [partitionIndex] it got from partiton()
//      And then recursively passes new subarrays to partiton()

// quickSort() :  {10, 20, 5, 3, 9, 7} 
//                {9, 7, 5, 3, 10, 20} 
//                          /   ^   \
//                {9, 7, 5, 3}      {20}
//                {3, 7, 5, 9}
//                  /     \ ^
//                {3, 7}  {5}
//                {3, 7}
//                 /  \
//                {}  {7}


#include <iostream>
using namespace std;

void printArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";  
    } 
    cout << endl;               
}


// PARTITION FUNCTION
int partition(int* arr, int low, int high){
    int pivot = arr[low];      // STEP 1 : Select the first element as pivot
    int i = low + 1;           // STEP 2 : Start i from the element next to pivot
    int j = high;              // STEP 3 : Start j from the last element

    //                                         v---------left-side---------v       Center      v---------right-side-------v
    // STEP 4 : Loop to maintain this order :  [elements smaller than pivot]  <--- pivot ----> [elements bigger than pivot]
    do{
        while (pivot >= arr[i]) // STEP 4.1 : Move i (left-->right) and STOP when you found element bigger than pivot
        {
            i++; 
        }

        while (pivot < arr[j])  // STEP 4.2 : Move j (left <--right) and STOP when you found element smaller than pivot
        {
            j--; 
        }

        if (i < j)              // STEP 4.3 : if [i] and [j] didnt crossed each other
        {
            swap(arr[i], arr[j]); // STEP 4.4 : then swap element in index [i] (bigger element) with index [j] (smaller element)
        }

    } while(i < j);            // Repeat until i crosses j

    swap(arr[low], arr[j]);    // STEP 5 : Swap pivot with element at index j

    return j;                  // STEP 6 : Return the partition index
}


// QUICK SORT FUNCTION
void quickSort(int* arr, int low, int high){
    int partitionIndex;

    if (low < high) // STEP 1 : Check if at least 2 elements are there
    {
        partitionIndex = partition(arr, low, high);        // STEP 2 : Partition the array
        quickSort(arr, low, partitionIndex - 1);           // STEP 3 : Recursively sort left part
        quickSort(arr, partitionIndex + 1, high);          // STEP 4 : Recursively sort right part
    }
}


// MAIN FUNCTION
int main(){
    int arr[]= {10, 20, 5, 3, 9, 7};                        
    int size = sizeof(arr)/sizeof(arr[0]);                   

    printArray(arr, size);                                   
    quickSort(arr, 0, size - 1);                             
    printArray(arr, size);                                   

    return 0;
}
