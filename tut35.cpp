// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-35

#include<iostream>
using namespace std;

// Destructor neither takes an argument nor does it return any value.

class num
{
    int count;
public:
    num(){}
    num(int i)
    {
        count = i;
        cout<<"The is the time constructor is called for object number "<<count<<endl;
    }

    ~num()
    {
        cout<<"This is the time destructor is called for object number "<<count<<endl;
    }
};

int main(){
    cout<<"We are inside the main function."<<endl;
    cout<<"Creating the first object."<<endl;
    num n1(1);
    {
        cout<<"Entering this block."<<endl;
        cout<<"Creating two more objects."<<endl;
        num n2(2), n3(3);
        cout<<"Exiting the block."<<endl;
    }
    cout<<"Back to main."<<endl;
    return 0;
}