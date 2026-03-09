// In selection sort : we compare each value and find the smallest value [currentSmallest] once the smallest value is found we start swaping from starting indexes
// explaination below the code

#include <iostream>
using namespace std;

void selectionSort(int *arr, int size){
    for (int i = 0; i <= size-1 ; i++)
    {
        int smallestIndex = i;  // STEP 1 : select an index from array and assume that value stored inside it is smallest value 

        for (int j = i+1 ; j <= size-1; j++) // STEP 2 : Compare that smallest value from all the elements in that array 
        {
            if (arr[j] < arr[smallestIndex]){ // STEP : 3 If a smaller element is found
                smallestIndex = j; // STEP 4:  Update the index of the smallest element
            }
        }

        // STEP 5 : Swap the smallest found element with the element at index i
        swap(arr[i] , arr[smallestIndex]);
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
    int arr[]= {10, 20, 5, 3, 9, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}




































// In selection sort we select one value and compare it with all the values. And if that value is smallest we swap it from starting index 
// Simply : we compare each value and find the smallest value [currentSmallest] once the smallest value is found we swap

// Array = | 10 | 3 | 8 | 5 | 9 | 2 |
// we will start from index[0], Assuming arr[0] = 10 is the smallest value, so currentSmallest = arr[0]
// in future we will keep updating currentSmallest with each value in array, currentSmallest = arr[i++]

// Now we will compare [currentSmallest] with all elements in arr[i] = {3, 8, 5, 9, 2} means----> if arr[i] < currentSmallest ??
// At first we will get that [3] which is smaller than [10] So, we will update currentSmallest = 3
// Again we will get [2] which is smaller than [3] So, we will update currentSmallest = 2
// After that there is no other value smaller than [2]. So, we will swap value at arr[0] with currentSmallest means,
// swap(10, 2). So new array will be : | 2 | 3 | 8 | 5 | 9 | 10 | : iteration 1
//                                     ---- ---------------------
//                                      ^               ^
//                                     SORTED       UNSORTED
// iteration 2 : NO CHANGE (3 is already at proper place) ---> | 2 | 3 | 8 | 5 | 9 | 10 |
// iteration 3 : (5 swapped with 8)                       ---> | 2 | 3 | 5 | 8 | 9 | 10 |
// iteration 4 : NO CHANGE (already at proper place)      ---> | 2 | 3 | 5 | 8 | 9 | 10 |
// iteration 5 : NO CHANGE (already at proper place)      ---> | 2 | 3 | 5 | 8 | 9 | 10 |

