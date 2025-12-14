#include <iostream>
// Arrays ka use krke ek shop ke sabhi items ka PRICE aur unki ID ko store krege 
// Aur phir methods ko main function me loops ka use krke display krege 

using namespace std;
class shop
    {
        int itemID[100];
        int itemPrice[100];
        int itemCount; // Number of items are stored 

    public:

        void initialize_itemCount(void);
        void setPrice_ID(void);
        void display(void);
    
    };

// initialize itemCount = 0 kardia taki jab item ki entry start ho tab wo "0" se start ho 
    void shop :: initialize_itemCount(void){ itemCount = 0;} // Pehle Item 0 ka ID aur Price phir, Item 1 ka and ...


// Function to store ID and PRICE 
    void shop :: setPrice_ID(void){
        cout << "Enter Item ID : " << endl;
        cin>>itemID[itemCount]; // Jo item number counting me chal rha hai uski ID store krega, Agli baar Item 1 hojayega q ki (itemCount ++) neeche kia hai

        cout << "Enter Item Price : " << endl;
        cin>>itemPrice[itemCount];
        itemCount++; // Jaise hi ek Item store hoga Itemcount ki value +1 hoti jayegi 
    }
    
// Function to display all items PRICE and ID which we stored
    void shop :: display(void){
        for (int i = 0; i < itemCount; i++)
        {
            cout << "The ID of Item " <<i<< " is " << itemID[i] << " And PRICE of the item is "<< itemPrice[i] << endl;
        }
    }

int main(){
    int num_of_item;
    cout << "Enter number of items you wanna store :" << endl;
    cin>>num_of_item;

    shop kirana;

    kirana.initialize_itemCount();
    kirana.setPrice_ID(); // Isko ek baar likhne se sirf ek hi item ko store kr payege, Toh hum use krege loop is function ko call krne ke liye
    
     for (int i = 0; i < num_of_item; i++) {
        kirana.setPrice_ID();
    }
    
    kirana.display();

    return 0;
}