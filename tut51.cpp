// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-51 

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
public:
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }

    void getData(){
        cout<<"Your complex number is "<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // *(ptr).setData(1, 54); is same as 
    ptr -> setData(1, 4);                           // " -> " this is called arrow operator

    //*(ptr).getData(); is same as
    ptr -> getData();

    //***** Array of objects *****
    Complex *ptr1 = new Complex[4];
    
    ptr1 -> setData(1, 2);
    ptr1 -> getData();

    (ptr + 1) ->setData(3, 4);
    (ptr + 1) ->getData();

    (ptr + 2) ->setData(5, 6);
    (ptr + 2) ->getData();

    (ptr + 3) ->setData(7, 8);
    (ptr + 3) ->getData();

    return 0;
}