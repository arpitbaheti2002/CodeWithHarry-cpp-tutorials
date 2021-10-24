// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-58

#include<iostream>
#include<cstring>
using namespace std;


class CWH{                      // Abstract Base Class
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        virtual void display() = 0;         // do-nothing function --> Pure Virtual Function
};

class CWHVideo : public CWH{
    protected:
        float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Rating : "<<rating<<" out of 5 stars."<<endl;
            cout<<"The length of this video is "<<videoLength<<" minutes."<<endl;
        }
};

class CWHText : public CWH{
    protected:
        int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            words = wc;
        }

        void display(){                                              // Comment it and compiler will give error
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Rating of this text tutorial : "<<rating<<" out of 5 stars."<<endl;
            cout<<"No of words in this text tutorial is "<<words<<" words."<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code with Harry video
    title = "Django tutorial";
    rating = 4.8;
    vlen = 15.39;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout<<endl;
    tuts[1]->display();

    return 0;
}

/*
    Pure virtual function is a function that doesn’t perform any operation and the function is declared 
    by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.

    Abstract base class is a class that has at least one pure virtual function in its body. 
    The classes which are inheriting the base class must need to override the virtual function of the abstract 
    class otherwise compiler will throw an error.
*/