// Find Unique element in the array/vectpr filled with duplicate values 
// Input : [1,2,4,2,1]
// Output : 4

#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> nums = {1,2,4,2,1}; // 1 ^ 2 ^ 4 ^ 2 ^ 1 = 4

    int uniqueElement = 0;
    for(int num : nums){
        uniqueElement ^= num;
    }

    if (uniqueElement){   
        cout << " Unique Element : " << uniqueElement << endl;
        return 0;
    }

    cout << "No Unique Element Found"; 

    return 0;
}