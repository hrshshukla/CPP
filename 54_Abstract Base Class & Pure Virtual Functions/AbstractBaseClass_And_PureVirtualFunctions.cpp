#include <iostream>
#include<cstring>
// Last time we have seen : example of Virtual_class and Usage 
// Now, we will learn :
// (Abstract Base-Class) and (Pure Virtual Functions)

// Abstract Base Class : (1) Wo (base_class) jinko hum sirf inhert krne ke motive se banate hai unko (abstarct base_class) bolte hai.
//                       (2) (Abstract base_class) ko objects create krne ke liye nhi use krte, Sirf uska use krke (derived_class) banayege bas.
//                       (2) (Abstract base_class) me ek (pure virtual function) zaroor dekhne ko mil jata hai.

// Pure virtual_functions : (1) Wo functions jisko hum future me redifine krna hi padega 
                        //  (2) virtual void display(void)=0;           <------ inside base_class also called (abstract base_class)
                        //  (3) Aur agar koi (derived_class) isko redifine nhi kregi toh error ajeyga, means
                        //  (4) virtual void display(void){ something } <------ inside (derived_class)


// ------>  Yaha (class CWH) ek abstract base_class hai jiske andar display() function ek (pure virtual_function) which is (= 0) aur isko aage redifine krna hi padega otherwise error ajayega.
using namespace std;

class CWH{
 protected:
    string title;
    float rating; 

 public:
    CWH(string title, float rating){
        this->title = title;
        this->rating = rating;
    }
    virtual void display(void)=0; // do-nothing function --------> Pure virtual_function 
};


class CWHvideos : public CWH{
     float videoLength;

 public:
     CWHvideos(string title, float videoLength, float rating):CWH(title, rating){
        this->videoLength = videoLength;
     }

    void display(void){
        cout <<endl<< "Welcome to CWHvideos " << endl;
        cout << "The title of the video is : " << title << endl;
        cout << "The Lenght of the video is : " << videoLength <<  " Minutes" << endl;
        cout << "The rating of video is " << rating <<"/5" << endl;
    }
};

class CWHtext : public CWH{
    int words;

 public:
     CWHtext(string title, int words, float rating):CWH(title, rating){
        this->words = words;
     }

    void display(void){
        cout <<endl<< "Welcome to CWHtext " << endl;
        cout << "The title of the text is : " << title << endl;
        cout << "The number of the words is : " << words<< " Words" << endl;
        cout << "The rating of text is " << rating <<"/5" << endl;
    }
};

int main(){
    string title;
    float rating, videoLenght;
    int words;

// CWH Videos 
    title = "Coding Videos";
    videoLenght = 8.12;
    rating = 4.5;
    CWHvideos codingVideo(title, videoLenght, rating);


// CWHtext
    title ="Coding Text";
    words = 200;
    rating = 4.1;
    CWHtext codingText(title, words, rating);


        CWH* codingResources[2];
        codingResources[0] = &codingVideo;
        codingResources[1] = &codingText;

        codingResources[0]->display(); // -----> will call display() function of CWHvideos
        codingResources[1]->display(); // -----> will call display() function of CWHtext 


    return 0;
}
