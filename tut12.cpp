// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-12

#include<iostream>
using namespace std;

int main()
{
    // What is a pointer? --> Data type which holds the address of other data types. 
    int a= 3;
    int* b;
    b = &a;

    // & --> (address of) operator.
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * --> (value at) deference operator.
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address(value at address c) is "<<**c<<endl;
    return 0;
}