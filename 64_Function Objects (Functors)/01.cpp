#include <iostream>
#include <functional>
#include <algorithm>
// functional object : Functors
// they are warpped with the (class) so that we can use them as a (object) 

//  greater<int>() ---> means greater number first 
//  greater<int>() ---> ek object ki tarha

using namespace std;

    void display(int array[]){
        for (int i = 1; i < 6; i++){
        
        cout << array[i] << " ";
        }
        cout << endl;
    }

int main(){
    int array[] = {74, 3, 96, 23, 20, 1};

    sort(array, array+4); // -----> sort array till (4th) element
    display(array); // Output : 3 20 23 74 96

//------> Sorting array in descending order 
    sort(array, array+7, greater<int>()); // -----> sort array till its (4th) element decending order 
    display(array); // Output : 96 74 23 20 3

    return 0;
}