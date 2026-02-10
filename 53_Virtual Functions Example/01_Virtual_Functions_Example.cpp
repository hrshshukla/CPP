#include <iostream>
#include<cstring>
// Creating a example of virtual functions 
// (Class CWH) ----> (CWH Videos) , (CWH Text)
// Rules of virtual_function (at last section)

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
    virtual void display(void){}
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
//  codingVideo.display(); <----- We will use (class_pointers) to call display() function.

// CWHtext
    title ="Coding Text";
    words = 200;
    rating = 4.1;
    CWHtext codingText(title, words, rating);
//  codingText.display(); <----- We will use (class_pointers) to call display() function.

        CWH* codingResources[2];
        codingResources[0] = &codingVideo;
        codingResources[1] = &codingText;

        codingResources[0]->display(); // -----> will call display() function of (derived_class) CWHvideos even if the pointer belongs to (base_Class) CWH. Because we used (Virtual Keyword)
        codingResources[1]->display(); // -----> will call display() function of (derived_class) CWHtext even if the pointer belongs to (base_Class) CWH


    return 0;
}

// Output:

// Welcome to CWHvideos
// The title of the video is : Coding Videos      
// The Lenght of the video is : 8.12 Minutes      
// The rating of video is 4.5/5

// Welcome to CWHtext
// The title of the text is : Coding Text
// The number of the words is : 200 Words
// The rating of text is 4.1/5


//_________________________________________________________

// Rules of Virtual_Functions :
// 1. The are accessed with the help of pointer 
// 2. They cannot be static function
// 3. Virtual Funstions can be friend of another class 
// 4. Virtual function of (base_class) might not be used or does nothing like --> virtual void display(void){}
// 5. if (derived_class) has NO display() function then, display() function of (base_class) will automatically run.