// reverse a vector 

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> &vecTor){
    int prefix = 0;
    int suffix = vecTor.size()-1;
    while (prefix < suffix)
    {
        swap(vecTor[prefix],vecTor[suffix]);
        prefix++;
        suffix--;
    }
}

int main(){
    vector<int> nums = {10, 20, 30, 40, 50};
    
    reverse(nums);  

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}