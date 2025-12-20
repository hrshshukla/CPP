#include <iostream>
//      int *ptr = new int[10]; ------> for integer array of class using pointer 
//      complex *ptr = new complex[10]; ------> for class

// Clearity : shopItem *ptr = new shopItem[5];
//            Jo humne [5] class banayi hai (ptr) jo ki address store krta hai iski help se hum blocks me switch krete hai ek block se doosre block me jump  
//            aur (*ptr) ki help se ek particular block ke andar value ko write krte hai 

using namespace std;

class shopItem{
     int id;
     float price;

public:
    void setData(int a, float b){
        id = a;
        price = b;
    }

    void printData(){
        cout << "The id : " << id << endl;
        cout << "The price : " << price << endl<<endl;
    }
     
};

int main(){
    int size = 5;

//  int *ptr = new int[10]; --------> intger Array 
    shopItem* ptr = new shopItem[size]; // -------> Class Array
    shopItem* Double_ptr = ptr;

// Funtion to get input from user and set data of each object indices in array 
    
    int id; float price;// Use it to store value  
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter the id and price of item : " << i << endl;
        cin>>id>>price;
        
        ptr->setData(id, price);// -------> ye block level pe kaam ho rha hai block ka andar data write kia ja rha hai 
        ptr++; // ------> ye memory pe kaam ho rha hai (block switch ho rhe hai) 
    }

// Function to print each object
    for(int j = 1; j <= size; j++)
    {
        Double_ptr->printData(); 
        Double_ptr++; // ------> upar wale for-loop me (ptr++) hote hote block ke bahar chala gya isiliye ye (Double-ptr) 
    }

    return 0;
}