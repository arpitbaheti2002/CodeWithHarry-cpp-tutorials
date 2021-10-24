// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-53

/*
    “this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the 
    member function. 
*/

#include<iostream>
using namespace std;

class A{
    int a;
public:
    void setData(int a)
    {
        this->a = a;                    // Here this points to data member of object which invokes the function.
    }

    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }

    // this pointer can also be used to return objects in a function
    A & setData_return(int a){
        this->a = a;
        return *this;
    } 
};

int main(){
    A a;
    a.setData(4);
    a.getData();
    
    return 0;
}