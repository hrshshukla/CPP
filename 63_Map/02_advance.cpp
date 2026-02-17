#include <iostream>
#include <map>
#include <string>
#include <tuple>  // Include tuple for multiple columns

// Abhi tak hum map me (2-Column) me hi bas data store kr sakte the
// But with the help of (tuple) specifically (make_tubple) can help to store more than (2-Column)
// And use get<0> to access the columns where : get<0> means column 0 of tuple 

using namespace std;

// Display function for map with multiple columns
void display(map<string, tuple<int, string, int>> map1) {
    cout << endl << "Map"<< endl;

    for (auto iterMap = map1.begin(); iterMap != map1.end(); ++iterMap) {
        cout << "| " << iterMap->first 
             << " | " << get<0>(iterMap->second)
             << " | " << get<1>(iterMap->second) 
             << " | " << get<2>(iterMap->second)<< " |" << endl;
    }
}

int main() {
    // map with tuple as value to store multiple fields
    map<string, tuple<int, string, int>> personInfoMap;
    
    personInfoMap["Harsh"] = make_tuple(19, "Nothing", 44);
    personInfoMap["Dumbledoor"] = make_tuple(99, "Headmaster", 44);
    personInfoMap["Harry Potter"] = make_tuple(89, "Wizard", 44);

    display(personInfoMap);

    // Adding more entries
    personInfoMap.insert({{"Voldemort", make_tuple(98, "Dark Lord", 44)}, 
                          {"Ron", make_tuple(34, "Sidekick", 44)}, 
                          {"Hermione", make_tuple(90, "Top Student", 44)}});
    display(personInfoMap);

    return 0;
}
