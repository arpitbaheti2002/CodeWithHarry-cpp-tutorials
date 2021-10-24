// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-38

#include<iostream>
using namespace std;

class Base{
    int data1;                      // private  by default and non inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData()
{
    data1 = 6;
    data2 = 9;
}

int Base :: getData1()
{
    return data1;
}

int Base :: getData2()
{
    return data2;
}

class Derived : public Base         // Class is being derived publically
{
    int data3;
public:
    void process();
    void display();
};

void Derived :: process()
{
    data3 = data2 * getData1();
}

void Derived :: display()
{
    cout<<"Value of data1 is :- "<<getData1()<<endl;
    cout<<"Value of data2 is :- "<<data2<<endl;
    cout<<"Value of data3 is :- "<<data3<<endl;
}

int main(){
    Derived der;
    cout<<sizeof(der)<<endl;
    der.setData();
    der.process();
    der.display();

    return 0;
}