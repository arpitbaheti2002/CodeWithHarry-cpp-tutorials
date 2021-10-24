// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-46

// Very important to watch video.

// More example in tut48.cpp

/*
Syntax for Constructor in derived class :

Derived-constructor(data-type arg1, data-type arg2, ...) : Base-1 constructor(arg1, arg2), Base-2 constructor(arg 3)
{
    body of constructor.
}
*/

#include<iostream>
using namespace std;

class A
{
protected:
    int a1, a2;
public:
    A()
    {
        cout<<"Constructor 1 of class A was called."<<endl;
        a1 = 0;
        a2 = 1;
    }

    A(int a)
    {
        cout<<"Constructor 2 of class A was called."<<endl;
        a1 = a;
        a2 = 1;
    }

    A(int a, int b)
    {
        cout<<"Constructor 3 of class A was called."<<endl;
        a1 = a;
        a2 = b;
    }
};

class B
{
protected:
    int b1, b2;
public:
    B()
    {
        cout<<"Constructor 1 of class B was called."<<endl;
        b1 = 0;
        b2 = 1;
    }

    B(int a)
    {
        cout<<"Constructor 2 of class B was called."<<endl;
        b1 = a;
        b2 = 1;
    }

    B(int a, int b)
    {
        cout<<"Constructor 3 of class B was called."<<endl;
        b1 = a;
        b2 = b;
    }   
};

class C : public A, public B
{
protected:
    int c1, c2;
public:
    C()
    {
        cout<<"Constructor 1 of class C was called."<<endl;
        c1 = 0;
        c2 = 1;
    }

    C(int a, int b, int c) : A(a), B(b)
    {
        cout<<"Constructor 2 of class C was called."<<endl;
        c1 = c;
        c2 = 1;
    }

    C(int a, int b, int c, int d, int e, int f) : A(a, b), B(c, d)
    {
        cout<<"Constructor 3 of class C was called."<<endl;
        c1 = e;
        c2 = f;
    }
};

int main(){
    C a;
    cout<<endl;
    C b(6, 7, 8);
    cout<<endl;
    C c(12, 23, 34, 45, 56, 67);
    return 0;
}
