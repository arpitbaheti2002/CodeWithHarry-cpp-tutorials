// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-31

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex() // Default Constructor
    {
        a = 0;
        b = 0;
    }

    Complex(int x) // Parameterized Constructor
    {
        a = x;
        b = 0;
    }

    Complex(int x, int y) // Parameterized Constructor
    {
        a = x;
        b = y;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3(6, 7);
    c3.printNumber();

    return 0;
}
