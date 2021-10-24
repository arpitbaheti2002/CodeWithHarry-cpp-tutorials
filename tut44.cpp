// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-44

// Very important to watch video.

/*
    A --> B
    A --> C

    B --.
        |
        --> D
        |
    C --.
*/

#include<iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    A()
    {
        a = 10;
    }

    void display(){
        cout<<a;
    }
};

/* Without writing virtual the code will generate ambiguity, 
   as data member a and display() function is inherited in class D from both
   class B and class C. To resolve this we make class A Virtual Base Class, which ensures that when a and display()
   is inherited from its derived classes ( B and C ) to any other class (D), a gets inherited only once.
*/

// class B : public virtual A       --> is also correct
class B : virtual public A             
{

};

class C : virtual public A
{

};

class D : public B, public C
{

};

int main(){
    D d;
    d.display();

    return 0;
}
  