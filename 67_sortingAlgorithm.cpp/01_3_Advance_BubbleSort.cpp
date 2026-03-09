// PROBLEM : if you pass sorted array in normalBubbleSort then is will run O(n²) even if the array is sorted 
// but, advanceBubbleSort will run less than O(n) is you pass sorted array 
// The important thing about advanceBubbleSort it start ignores the sorted part of the array, and saves time 

// lets assume a sorted array = [1,2,3,4,5,6]

// the main idea was, intially declare the array as sorted --> int isSorted = 1;
// then, in comparison loop --> all the elements were compared and as every element is already at right position 
// then this [if-else] will always give FALSE ----> if (arr[j] > arr[j+1])
// And, the value of isSorted will remain "1" 
// hence,  if (isSorted)return; ---> will break the loop
// leads to less number of [pass] loops 

// Time Compelxity : Best Case O(n) & Worst Case : O(n²)

#include <iostream>
using namespace std;

void normalBubbleSort(int* arr, int size){  
    
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)  
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
        cout << "Pass : " << i+1 << endl;
    }
}

void advanceBubbleSort(int* arr, int size){ 

    // loop to run on updated array
    for (int i = 0; i < size-1; i++) 
    {
        int isSorted = 1; // default value, assuming array is sorted 

        cout << " Pass : " << i+1 << endl;
        // this loops run for each element and swap (if needed)
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSorted= 0;
            }
            cout << "\t comparison no : " << j+1<< endl;
        }

        // Stop the current pass 
        if (isSorted)break;
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
    int arr[] = {1,88,89,889};
    int size = sizeof(arr) / sizeof(arr[0]);
    advanceBubbleSort(arr, size);
    printArray(arr, size);
    
    return 0;
}