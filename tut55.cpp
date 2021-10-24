// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-55

#include<iostream>
using namespace std;

class BaseClass
{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = & obj_derived;

    base_class_pointer -> var_base = 8;
    // base_class_pointer -> var_derived = 8;          // This  will give error
    base_class_pointer -> display();

    base_class_pointer -> var_base = 8000;
    base_class_pointer -> display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = & obj_derived;
    derived_class_pointer -> var_base = 320;
    derived_class_pointer -> var_derived = 800;
    derived_class_pointer -> display();
    return 0;
}
/*
    By using the pointer “base_class_pointer” of the base class we have set the value of the data member 
    “var_base” by “34”. The main thing to note here is that we cannot set the value of the derived class data 
    member by using the base class pointer otherwise the compiler will throw an error.
*/