#include <iostream>
using namespace std;

void printArray(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";  
    } 
    cout << endl;               
}

int maximumFunc(int* arr, int size)
{
    // Assuming value in index[0] is maximum 
    int maxValue = arr[0]; 

    // loop to find maxValue in array 
    for (int i = 0; i <= size-1; i++){
        if (maxValue < arr[i])
        {
            maxValue = arr[i];
        }
    }

    // return the maxValue
    return maxValue;
}

void countSort(int* arr, int size){
    int max = maximumFunc(arr, size); // find max value in original array

    // create a count array whose size is = maximum value found in orginal array 
    int* countArr = new int[max+1];

    // fill count array with 0 
    for (int i = 0; i <= max; i++)
    {
        countArr[i] = 0;
    }

    // The value of original array will be the index of count array 
    for (int i = 0; i <= size-1 ; i++)
    {
        countArr[arr[i]] = countArr[arr[i]] + 1 ; // incrementing the values of countArr
    }

    int i = 0; // index number of count array 
    int j = 0; // index number of original array

    while(i <= max) // from index[0] --> index[end] of count array 
    {
        if (countArr[i] > 0)
        {
            arr[j] = i; // index number of count array will become the value of original array
            j++; // move to the next index of original array
            countArr[i]--; 
        }
        else
        {
            i++;
        }
    }


    delete[] countArr;
}

int main(){
    int arr[] = {9, 1, 4, 14, 4, 15, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    countSort(arr, size);
    printArray(arr, size); 
    
    return 0;
}