// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-66

#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Arpit{
    public:
        T1 a;
        T2 b;
        T3 c;
        Arpit(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){
    Arpit<> obj1(1, 2.3, 'p');
    obj1.display();

    cout<<endl;

    Arpit<float, char, bool> obj2(4.56, 'q', false);
    obj2.display();
    return 0;
}