// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-27

#include<iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a+b);
    }

    int RealComplex(Complex, Complex);
    int CompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring functions as friends...
    // friend int Calculator :: RealComplex(Complex, Complex);
    // friend int Calculator :: CompComplex(Complex, Complex);

    // Aliter : Declaring the entire Calculator class as friend.
    friend class Calculator;
public: 
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i."<<endl;
    }
};

int Calculator :: RealComplex(Complex c1, Complex c2)
{
    return (c1.a + c2.a);
}

int Calculator :: CompComplex(Complex c1, Complex c2)
{
    return (c1.b + c2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(4, 5);
    o2.setNumber(6, 7);

    Calculator calc;
    int sum = calc.RealComplex(o1, o2);
    cout<<"The sum of Real part of o1 and o2 is "<<sum<<endl;
    int sumc = calc.CompComplex(o1, o2);
    cout<<"The sum of Complex part of o1 and o2 is "<<sumc<<endl;
    return 0;
}