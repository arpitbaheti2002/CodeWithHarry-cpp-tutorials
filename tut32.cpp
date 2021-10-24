// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-32

#include<iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;
public:
    Simple (int a = 2, int b = 4, int c = 9)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple :: printData()
{
    cout<<"The value of data1, data2 and data3 are "<<data1<<", "<<data2<<" and "<<data3<<" respectively."<<endl;
}

int main(){
    Simple s1(1, 2, 3);
    s1.printData();

    Simple s2(4, 5);
    s2.printData();

    Simple s3(6);
    s3.printData();

    Simple s4;
    s4.printData();

    return 0;
}