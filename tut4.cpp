//  Notes :-->  https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-4

//  Types of variables based on Scope :-
//  1.  Local Variables.
//  2.  Global Variables.

//  Data types :- 
//  1.  Built-in data types --> int, float, char, double, bool. 
//  2.  User-defined data types --> struct, union, enum.
//  3.  Derived data types --> array, pointer, function.  

#include<iostream>
using namespace std;

int glo = 6;
void sum()
{
    int a;
    cout<<glo<<endl;
}

int main(){
    int glo=7;
    glo = 98;
    ::glo = 19;                 //  " :: " is called scope resolution operator
    // int a=14;
    // int b=16;
    int a=14, b=16;
    float pi=3.14;
    char c='d';
    bool is_true = true;

    sum();
    cout<<"The value of glo is "<<glo<<endl;
    cout<<is_true<<endl;
    // cout<<"Here the value of a is "<<a<<".\nThe value of b is "<<b;
    // cout<<"\nThe value of pi is "<<pi;
    // cout<<"\nThe value of c is "<<c;
    
    return 0;
}