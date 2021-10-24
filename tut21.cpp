// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-21

#include<iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;
public:
    int d, e;
    void setData(int a1, int b1, int c1);      // Declaration
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    class Employee arpit;
    // arpit.a = 999;       --> This will throw error because a is private.
    arpit.d = 12;
    arpit.e = 23;
    arpit.setData(34, 45, 56);
    arpit.getData();
    return 0;
}