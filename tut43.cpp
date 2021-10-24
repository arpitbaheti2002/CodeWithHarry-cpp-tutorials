// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-43

#include<iostream>
using namespace std;

class Base1
{
public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};

class Base2
{
public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
public:
    void greet()
    {
        Base1 :: greet();           // here we are calling greet function of class Base1.
                                    // We need to do this to remove ambiguity.
    }
};

class B
{
public:
    void say()
    {
        cout<<"Hello world !"<<endl;
    }
};

class D : public B
{
    int a;
public:
    // D's new say() will overwrite the base class's say() method
    void say()
    {
        cout<<"Hello my beautiful people. "<<endl;
    }
};

int main(){
    // Ambiguity 1
    // Base1 objBase1;
    // Base2 objBase2;
    // objBase1.greet();
    // objBase2.greet();
    // Derived d;
    // d.greet();

    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}