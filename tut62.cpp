// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-62

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"Hi! This is me Arpit Baheti\n";
    out<<"Will do until it is done\n";
    out<<"Already failed. so failing is no more an option.";
    out.close();

    ifstream in;
    in.open("sample60.txt");
    // string st1, st2;
    // in>>st1>>st2;
    // cout<<st1<<st2;

    string st;
    while(in.eof()==0)          // file.eof() returns 1 when end of file is encountered.
    {
        getline(in, st);
        cout<<st<<endl;
    }

    return 0;
}