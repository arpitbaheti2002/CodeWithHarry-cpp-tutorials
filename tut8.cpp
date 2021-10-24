//  Notes :-->  https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-8

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // cout<<"The value of a was "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is "<<a<<endl;

    // ********** Constants in C++ **********
    // const int b = 3;
    // cout<<"The value of b was "<<b<<endl;
    // // b = 4;           //  This will throw error because b is constant
    // cout<<"The value of b is "<<b<<endl;

    // ********** Manipulators in C++ **********
    //  setw(_), endl(), fixed(), setpecision(_), etc. are manipulators

    // int a= 3, b=24, c= 1235;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;

    // cout<<"The value of a with setw is "<<setw(4)<<a<<endl;
    // cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is "<<setw(4)<<c<<endl;

    //********** Operator Precedence **********
    //  Operator Precedence --> https://en.cppreference.com/w/cpp/language/operator_precedence

    int a = 3, b = 4;
    //  int c = (a*5)+b;
    int c = ((((a*6)+32)+b)-9); 
    cout<<c;

    return 0;
}