#include <iostream>
#include <map>
#include <string>
// Hash Tables : https://youtu.be/FsfRsGFHuv4

// Time Complexity : 

// -- Ordered Map
// -> Searching & Fetching: O(log n)  (best, average, worst case)

// -- UnOrdered Map
// -> Searching & Fetching: O(1)  (best, average case),   worst case -> O(n)  because of collisions = creation of linked list 

// Map store values like excel sheet (rows & columns)
// ----> Using : map.insert()

using namespace std;
static int counter = 0;

void display(map<string, int> map1){
    cout << endl << "Map No."<< ++counter << endl;

// declear iterator ------>  map<string, int> :: iterator iterMap;
    map<string, int> :: iterator iterMap;

    for ( iterMap = map1.begin(); iterMap != map1.end(); iterMap++)
    {
        cout << iterMap->first << " : "<< (*iterMap).second << endl;
    }
}   

int main(){
    map<string, int> marksMap;
    marksMap ["Harsh "] = 19;
    marksMap ["Dumbledoor "] = 100;
    marksMap ["Harry Potter "] = 89;

    display(marksMap);

/*                  Map No. 1
    ---------------------------------------
    | Key            | Value              |
    ---------------------------------------
    | Harsh          | 19                 |
    | Dumbledoor     | 99                 |
    | Harry Potter   | 89                 |
    ---------------------------------------
*/

// ------> Using : map.insert()  
    marksMap.insert({{"Voldemort", 98}, {"Ron",34}, {"Hermione", 90}});
    display(marksMap);

/*                   Map No. 2
    ---------------------------------------
    | Key            | Value              |
    ---------------------------------------
    | Dumbledoor     | 99                 |
    | Harry Potter   | 89                 |
    | Harsh          | 19                 |
    | Hermione       | 90                 |
    | Ron            | 34                 |
    | Voldemort      | 98                 |
    ---------------------------------------
*/
    marksMap.insert({"GrindelWald ", 99});
    display(marksMap);
    
    return 0;
}