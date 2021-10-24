// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-39

// Protected access modifiers are similar to Private access modifiers but protected access modifiers can be
// accessed in the derived class whereas private access modifiers cannot be accessed in derived class.

// (Protected access modifiers are similar to private access modifiers but can be inherited).

#include<iostream>
using namespace std;

class Base{
protected:
    int a;
private:
    int b;
};
/*
                            Public derivation       Protected derivation        Private derivation
1. Private members          Not inherited           Not inherited               Not inherited
2. Protected members        Protected               Protected                   Private
3. Public members           Public                  Protected                   Private
*/

class Derived : protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<d.a;      --> Will not work because a is protected in derived class and 
    //                     and cannot be accessed outside the class.
    return 0;
}