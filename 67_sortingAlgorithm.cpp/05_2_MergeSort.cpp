#include <iostream>
using namespace std;

// 
//                                  [i] --------------> mid|[j] ---------------> high
//                                   V                   V | V                     V
//  Dividing array in two parts :  [ 10 | 30 | 99 | 2 | 44 | 56 | 20 | 5 | 3 | 9 | 7 ]
//                                   ^------left-part----^ |  ^-------right-part---^

void printArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";  
    } 
    cout << endl;               
}

void Merge(int* arr, int low, int mid, int high){
    int i = low; // starting index of left side sub-array ---> index 0
    int j = mid+1; // starting index of right side sub-array ---> index [mid of array]  + 1

    int tempArr[99];  // allocating large size array, assuming the input array will not be bigger than 99
    int k = low; 

    
    while (i <= mid && j<= high) // i will go from start-->to-->(mid of array) -AND- j will go from (mid of array)-->to-->last index
    {
        if (arr[i] < arr[j])
        {
            tempArr[k] = arr[i];
            i++, k++;
        }
        else
        {
            tempArr[k] = arr[j];
            j++, k++;
        }
    }

    // Copy all remaining elements of left array into new Array
    while(i<=mid){
        tempArr[k] = arr[i];
        k++, i++;
    }

    // Copy all remaining elements of right array into new Array
    while(j<=high){
        tempArr[k] = arr[j];
        k++, j++;
    }  

    // finally copying all sorted values from tempArr to original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = tempArr[i];
    }
}

void MergeSort(int* arr, int low, int high){

    if (low < high) // runs if there is more than one element in array
    {
        int mid = (low+high)/2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);
        Merge(arr, low, mid, high);
    }
}

int main(){
    int arr[] =  {10, 30, 99, 2, 44, 56, 20, 5, 3, 9, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr, size);
    MergeSort(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}