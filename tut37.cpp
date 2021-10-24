#include<iostream>
using namespace std;

// Base Class
class Employee
{
    float salary;
public:
    int id;
    Employee(){}

    Employee(int inpId){
        id = inpId;
        salary = 3006;
    }

    void dispSalary()
    {
        cout<<salary<<endl;
    }
};

//Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...  
}; 

Note:
1. Default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Pubic members of the derived class.
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class.
4. Private members are never inherited;

*/

// Creating a Programmer class derived from Employee Base class
class Programmer : private Employee
{
public:
    Programmer(int inpId){
        id = inpId;
    }
    int languageCode = 5;

    void getData()
    {
        cout<<id<<endl;
    }
};
// Derived class automatically invokes default cnstructor of base class.

int main(){
    Employee arpit(1001), akash(1002);
    arpit.dispSalary();
    akash.dispSalary();

    Programmer skillF(1010);
    // skillF.salary;         --> This will give error as id is private member of base class, 
    //                            hence won't be inherited. 
    skillF.getData();
    cout<<skillF.languageCode;
    return 0;
}