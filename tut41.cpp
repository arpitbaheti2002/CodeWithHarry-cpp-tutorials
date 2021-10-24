//Notes :-->    https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-41

// Syntax for inheriting in multiple inheritance
// class DerivedC : visibility-mode base1, visibility-mode base2
//{
//    Class body of "DerivedC"   
//}

#include<iostream>
using namespace std;

class Base1{
protected: 
    int base1int;
public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2{
protected: 
    int base2int;
public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3{
protected: 
    int base3int;
public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The value of Base3 is "<<base3int<<endl;
        cout<<"The sum of these numbers are "<<(base1int + base2int + base3int)<<endl;
    }
};
/*
The inherited derived class will look something like this :
Data members:
    base1int        --> protected
    base2int        --> protected
    base3int        --> protected

Member functions:
    set_base1int()  --> public
    set_base2int()  --> public
    set_base3int()  --> public
    display()       --> public
*/

int main(){
    Derived arpit;
    arpit.set_base1int(45);
    arpit.set_base2int(61);
    arpit.set_base3int(38);
    arpit.show();
    return 0;
}