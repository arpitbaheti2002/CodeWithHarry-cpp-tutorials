// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-61
// must watch

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with shout stream
    ofstream shout("sample60a.txt");

    // creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name :- ";
    cin>>name;

    // writing a string to the file
    shout<<name + " is my name.";

    shout.close();              // closing the file

    ifstream hin("sample60a.txt");
    string st1;
    string st2;

    hin>>st1;
    getline(hin, st2);

    cout<<st1<<endl;
    cout<<st2<<endl;
    
    hin.close();

    return 0;
}