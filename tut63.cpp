// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-63
// Must watch

/*
    A template is believed to escalate the potential of C++ several fold by giving it the ability to define 
    data types as parameters making it useful to reduce repetitions of the same declaration of classes for 
    different data types. 
    
    Declaring classes for every other data type(which if counted is way too much) in the very first place violates 
    the DRY( Don’t Repeat Yourself) rule of programming and on the other doesn't completely utilise the 
    potential of C++.
*/

#include <iostream>
using namespace std;

template <class T>          // T can be int, float, double, char

class vector
{
    T arr;
    int size;

public:
    vector (T a, int s){
        arr = a;
        size = s;
    }
    /* other methods */
};

int main()
{
    vector<int> obj1(12, 34);
    vector<float> obj2(56, 78.9);
    return 0;
}