// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-56

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base = 1;
        virtual void display(){                                                       // Used virtual keyword
            cout<<"1. Displaying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived = 2;
        void display(){
            cout<<"2. Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"2. Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    return 0;
}

/*  
    The main thing to note here is that if we don’t use the “virtual” keyword with the “display” function of 
    the base class then beside of the point that we have pointed our base call pointer to derived class object 
    still the compiler would have called the “display” function of the base class because this is its 
    default behavior as we have seen in the previous tutorial.

    But we have used the “virtual” keyword with the “display” function of the base class to make is virtual 
    function so when the display function is called by using the base class pointer the display function 
    of the derived class will run because the base class pointer is pointing to the derived class object.
*/