// Kadane's Algorithm : find maximum sub array sum 

#include <iostream>
#include <vector>

using namespace std;

int maxSum(vector <int> vecTor){
    int currentSum = 0, maxSum = vecTor[0]; 
    vector <int> IndexArr;
    int Index = 0;
    for (int val : vecTor)
    {
        currentSum += val;
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0) {
            currentSum = 0;

        }

    }
    
    return maxSum;
}

int main(){
    vector <int> vecTor = {1,2,-1,6,-2};

    cout << " Max Sub-array : " << maxSum(vecTor) << endl;
    return 0;
}