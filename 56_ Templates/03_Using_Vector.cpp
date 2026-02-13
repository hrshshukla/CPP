#include <iostream>
// Quick Intro <vector> : jaise array me hume declare krna padta tha ki array ka sixe ky hoga.   int array = [10] -----> 10 is the size of array 
//----------->   Same kaam kuch Vector ka bhi hota hai bas isme [size] nhi batna padta, bina size bataye bhi elements add hote jate hai

using namespace std;
template <typename dataType, int size>

class Vector{
 public:
    dataType* array;
    dataType arraySize = size;


    Vector(){
        array = new dataType[arraySize]; // kind of ----->  array = new int[10];
    }


    dataType dot_Product( Vector another_vector) {//-----> Ye function ek doosre (Object) ko as a argument lega aur dono objects ke array ko multiply krega
        dataType dotProduct = 0; // isme total value store karege
        for (int i = 0; i < size; i++)
        {
            dotProduct += this->array[i] * another_vector.array[i]; // obj1.array[0,1,2] * obj2.array[0,1,2]----> dono ke har ke (index) ko multiply krwake
        }//                                                                                                        dotProduct me store karege
        
        return dotProduct;
    }
     
};

int main(){
    Vector<int, 3> obj1;
    obj1.array[0] = 2;
    obj1.array[1] = 4;
    obj1.array[2] = 6;

    Vector<int, 3> obj2;
    obj2.array[0] = 3;
    obj2.array[1] = 6;
    obj2.array[2] = 9;
    
    int final_answer = obj1.dot_Product(obj2);
    cout << "Final answer :" << final_answer << endl;  // Output = 84

    return 0;
}

