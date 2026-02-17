#include <iostream>
#include <list>
using namespace std;
// Way to access and edit elements of LIST
// -----> Iterator (with for loop)
// -----> Iterator (without for loop)

// Using 
// ----> pop_back() 
// ----> pop_front()  
// ----> remove()

void display(list <int> &listt){
    
    list<int> :: iterator iter_listt;
    
    for (iter_listt = listt.begin(); iter_listt != listt.end(); iter_listt++){ // will run from list[0] ----> list[end]
        cout << *iter_listt<< " ";
        }
        cout << endl;
    }


     
int main() {
// (1) Method to access  elements of LIST with Pointer (iterator)
    list<int> list1= {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "List (1) : ";
    display(list1); // Output : 1 2 3 4 5 6 7 8 9 0 
    cout << endl;

cout << "REMOVING : " << endl;

// ----> Using pop_back() in LIST
         list1.pop_back();
         cout << "---> One-last element  : ";   
         display(list1); // Ouput : 1 2 3 4 5 6 7 8 9 

// ----> Using pop_front() in LIST
         list1.pop_front();
         cout << "---> One-first element  : ";   
         display(list1); // Ouput : 2 3 4 5 6 7 8 9 

// ----> Using remove() in LIST  
         list1.remove(5);
         cout << "---> One-Random element  : ";   
         display(list1); // Ouput : 2 3 4 6 7 8 9      



// (2) Method to access elements of LIST with Pointer (iterator)    
cout << endl;
    list<int> list2(3);
    list<int> :: iterator iter_list2;
    iter_list2 = list2.begin();
    
    *iter_list2 = 60; // list2[0] = 60;
    
    iter_list2++; // point to ---> iter_list2[1]
    *iter_list2 = 40; // list2[1] = 40;
    
    iter_list2++; // point to ---> iter_list2[2]
    *iter_list2 = 20; // list2[2] = 20;
    
    cout << "List (2) : ";
    display(list2); // Output : 60 40 20

    
// -----> Sorting the LIST
    list2.sort();
    cout << "---> Sorting (list2) : ";
    display(list2); // 20 40 60 

// ----> Merging the (list1) and (list2)
    list1.merge(list2);
    cout << "---> Merging (list1) with (list2) : ";
    display(list1); // 2 3 4 6 7 8 9 20 40 60

// -----> Sorting the LIST
    list1.reverse();
    cout << "---> Reversing (list2) : ";
    display(list1); // 60 40 20 9 8 7 6 4 3 2


// (3) list3 assign elements  
    list<int> list3;
    list3.assign(5, 99); 
    display(list3); // Ouput : 99 99 99 99 99

    list<int> list4;
    list3.assign(5, 1); // Ouput : 1 1 1 1 1


// (4) list4 swap
    list3.swap(list4);

    display(list3); // Ouput : 1  1  1  1  1
    display(list4); // Ouput : 99 99 99 99 99

// ---> clear() : remove all elements
               // (1) if we want delete element from a particular position we need to point iterator to that position use use --> iterator name = listname.erase (iterator name) keyword .
               // (2) if you want to erase range of element then first declare 2 iterators then, point iterators to 2 different position to make a range then use --> listname.erase ( first_iterator , second_iterator); 

    return 0;
    
}
