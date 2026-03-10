// 1e7 = 10⁷

// Exeception : 
// -> we cannot create an array[10⁷] inside -----> int main()
// -> but we can decalre it as global variable outside the int main() 

// Solution : Hashmap

#include <iostream>
using namespace std;

int count(int inputNum, int arr[], int size){
    
    int hash[60] = {0};  
    for (int i = 0; i < size; i++) 
    {
        hash[arr[i]]++; 
    }

    return hash[inputNum];
}
  

int main(){
    int arr[] = {10, 20, 20, 10, 10, 50};
    const int size = sizeof(arr)/sizeof(arr[0]);

    
    int number = 10;
    cout << count(number, arr, size) << endl;

    return 0;
}