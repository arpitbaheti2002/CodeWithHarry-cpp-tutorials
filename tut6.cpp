//  Notes :-->  https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-6 

//  There are two types of Header files :
//  1.  System header files : It comes with the compiler.
#include<iostream>
//  2.  User defined header files : It is written by the user.
//  #include "this.h"    //--> This will produce error if this.h is not present in the current directory.

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++ :-"<<endl;
    cout<<"Following are the types of operators in C++ :"<<endl;
    //  Arithmatic Operators
    cout<<"The following are the Assignment Operators :- "<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--b<<endl;
    cout<<endl;

    //  Assignment Operators --> used to assign values to variables
    //  int a=3, b=9;
    //  char d='d';

    //  Comparison Operators
    cout<<"The following are the Comparison Operators :- "<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<endl;

    //  Logical Operators
    cout<<"The following are Logical Operators :- "<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl;
    
    return 0;
}