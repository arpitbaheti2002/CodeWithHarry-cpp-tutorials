// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-16

#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

// This will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointers
void swapReference(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference Variables
// int& 
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main(){
    int x=4, y=5;
    // cout<<"The sum of x and y is "<<sum(x,y)<<endl;

    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    // swap(x,y);                      // This will not swap a and b.
    // swapReference(&x, &y);          // This will swap a and b using pointer reference.
    swapReferenceVar(x, y);         // This will swap a and b using reference variable.

    // swapReferenceVar(x,y) = 766;    // This will set value of x (a is returned) as 766.
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;

    return 0;
}