//  Notes :-->  https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-7

#include<iostream>
using namespace std;

int c = 45;

int main(){

    //********** Built-in Data Types **********
    int a, b, c;
    cout<<"Enter the value of a :- "<<endl;
    cin>>a;
    cout<<"Enter the value of b :- "<<endl;
    cin>>b;
    c = a+b;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of global c is "<<::c<<endl;

    //*********** Float, Double and Long Double Literals **********
    // float d = 34.4F;
    // long double e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    //********** Reference Variable **********
    // Arpit --> Appu --> Khote  
    // float x= 80;
    // float &y = x;
    // cout<<"The value of x is "<<x<<endl;
    // cout<<"The value of y is "<<y<<endl;

    //********** Typecasting **********
    // int a = 45;
    // float b = 45.46;

    // cout<<"The value of (float)a is "<<(float)a<<endl;
    // cout<<"The value of float(a) is "<<float(a)<<endl;

    // cout<<"The value of (int)b is "<<(int)b<<endl;
    // cout<<"The value of int(b) is "<<int(b)<<endl;
    // int c = (int)b;

    // cout<<"The expression a+b is "<<a+b<<endl;
    // cout<<"The expression a+(int)b is "<<a+(int)b<<endl;
    // cout<<"The expression a+int(b) is "<<a+int(b)<<endl;
    return 0;
}