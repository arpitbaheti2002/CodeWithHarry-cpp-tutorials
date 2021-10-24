// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-26

#include<iostream>
using namespace std;

class Complex
{
    int a, b;
    // Below line means that non-member sumComplex function is allowed to do anything to my 
    // private parts (members).

    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<" i."<<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(4, 5);
    c1.printNumber();

    c2.setNumber(5, 6);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/* Properties of Friend Functions :- 
    1. Not in Scope of class.
    2. since it is not in the scope of class, it cannot be called from the object of that class.
        c1.sumComplex(); --> Invalid
    3. Can be invoked without the help of any object.
    4. Usually contains the objects as arguments.
    5. Can be declared inside public or private section of class.
    6. It cannot access the members directly by using their names and need object_name.member_name to access 
       any member.
*/