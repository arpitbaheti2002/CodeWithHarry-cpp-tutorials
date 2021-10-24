// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-34

#include<iostream>
using namespace std;

class Number
{
    int a;
public:
    Number(){
        a = 0;
    }

    Number (int num){
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor.
    Number (Number &obj){           // Copy Constructor
        cout<<"Copy Constructor called !!!"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"The number for this object is :- "<<a<<endl;
    }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();    

    // If z1 had to resemble x, y or z we would call copy constructor. 

    Number z1(z);   // Copy constructor invoked.
    z1.display();

    z2 = z;         // Copy constructor not called.
    z2.display();

    Number z3 = z;  // Copy constructor invoked.
    z3.display();
    return 0;
}