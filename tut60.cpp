// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-60

#include<iostream>
#include<fstream>
/*
    The useful classes for working with files in C++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to it. Primarly, there are 2 ways to open a file :
//      1. Using the constructor.
//      2. Using the member function open() of the class. 

using namespace std;

int main(){
    string st1 = "Arpit bhai kaise ?";
    string st2, st3;
    
    // Opening file using constructor and writing in it
    ofstream out("sample60a.txt");      
    out<<st1;                            // write operation
    
    // Opening file using constructor and reading from it
    ifstream in("sample60b.txt");        // read operation
    // in>>st2;                                     // gets a word
    getline(in, st2);                               // gets line 1
    getline(in, st3);                               // gets line 2

    cout<<st2<<endl;
    cout<<st3<<endl;
    return 0;
}