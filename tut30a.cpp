// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-30

#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);          // Constructor declaration

    void printNumber(void){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(int x, int y)    // This is Parameterized constructor as it accepts 2 paramerters.
{
    a = x;
    b = y;
}

// Complex :: Complex(void)    // This is Default constructor as it accepts no paramerters.
// {
//     a = 10;
//     b = 20;
// }

int main()
{
    // Implicit call
    Complex a(4, 5);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}