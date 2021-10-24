// Notes :--> https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-57

// Must watch

#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        virtual void display(){
            cout<<"bogus code"<<endl;
        }
};

class CWHVideo : public CWH{
    protected:
        float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }

        void display(){
            cout<<"This is a amazing video with title "<<title<<endl;
            cout<<"Rating : "<<rating<<" out of 5 stars."<<endl;
            cout<<"Length of this video is "<<videoLength<<" minutes."<<endl;
        }
};

class CWHText : public CWH{
    protected:
        int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            words = wc;
        }

        void display(){
            cout<<"This is a amazing text tutorial with title "<<title<<endl;
            cout<<"Rating of this text tutorial : "<<rating<<" out of 5 stars."<<endl;
            cout<<"No of words in this text tutorial is "<<words<<" words."<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words; 

    // for Code with Harry Video :
    title = "Cpp Tutorial";
    vlen = 28.38;
    rating = 4.9;
    CWHVideo cppVideo(title, rating, vlen); 
    // cppVideo.display();
    
    // for Code with Harry Text :
    title = "Cpp Tutorial Text";
    words = 266;
    rating = 4.2;
    CWHText cppText(title, rating, words); 
    // cppText.display();

    CWH* tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &cppText;

    tuts[0] -> display();
    cout<<endl;
    tuts[1] -> display();
    return 0;
}

 /*
    Rules for virtual functions :- 
    1. They cannot be static.
    2. They are accessd by object pointers.
    3. Virtual funcions can be friend of another class.
    4. A virtual function in base class might not be used.
    5. If virtual function is defined in the base class, there is no necessity of redefining it 
       in the derived class.

       i.e. if no function with similar name is found in derived class, it will automatically execute 
       the one in base class.
*/ 