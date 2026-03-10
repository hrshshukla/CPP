// Exception : There is no such exception in characterHasing as we saw in numberHasing  
// Beacuse total number of possible characters lies in between 

#include <iostream>
#include <string>
using namespace std;

int count(string word, char letter, int size){

    // int hash[26] = {0}; -> for lower case, Formula : hash[word[i] - 'a']++;  AND   return hash[letter - 'a'];
    // int hash[26] = {0}; -> for lower case, Formula : hash[word[i] - 'A']++;  AND   return hash[letter - 'A'];

    int hash[256] = {0}; // for both Lower Case and Upper Case
    
    for (int i = 0; i < size; i++)
    {
        hash[word[i]]++;
    }

    return hash[letter];
}

int main(){
    string myWord = "abcdeaabbfz";
    int size = myWord.size();
    
    cout << count(myWord, 'z', size) << endl;
    return 0;
}