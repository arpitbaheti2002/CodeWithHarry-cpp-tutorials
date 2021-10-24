// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-29

#include<iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    // Creating a Constructor :-
    // Constructor is a special member function with the same name as of the Class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever whenever an object is created.

    Complex(void);                  // Construction declaration.

    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(void)            //---> This is a default constructor as it accepts no parameters. 
{
    a = 10;
    b = 20;
    // cout<<"Hello World !"<<endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

/* Characteristics of Constructors 

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return type.
4. It can have default arguments.
5. We cannot refer to their address. 

*/