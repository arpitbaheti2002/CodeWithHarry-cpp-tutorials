// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-64

#include<iostream>
using namespace std;

template <class T>

class Vector
{
public:
    T *arr;
    int size;

    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(Vector v)
    {
        T d = 0;
        for(int i=0; i<size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    Vector <int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    
    Vector <int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;

    cout<<"The dot product of v1 and v2 is "<<v1.dotProduct(v2)<<endl;

    Vector <float> v3(3);
    v3.arr[0] = 1.2;
    v3.arr[1] = 2.3;
    v3.arr[2] = 3.4;
    
    Vector <float> v4(3);
    v4.arr[0] = 4.5;
    v4.arr[1] = 5.6;
    v4.arr[2] = 6.7;

    cout<<"The dot product of v3 and v4 is "<<v3.dotProduct(v4)<<endl;
    return 0;
}