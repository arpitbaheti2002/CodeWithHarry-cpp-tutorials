// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-65

#include <iostream>
using namespace std;

/*
    CLASS TEMPLATES WITH MULTIPLE PARAMETERS (One, Two or more than Two)

    template<class T1, class T2, ....(Comma Seperated)>
    class nameOfClass
    {
        // class body
    }; 
*/

template <class T1, class T2>

class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << ", "<<this->data2 << endl;
    }
};

int main()
{
    myClass<int, float> obj1(1, 2.3);
    myClass<int, char> obj2(4, 'a');
    myClass<float, char> obj3(5.6, 'b');
    myClass<char, double> obj4('c', 7.8910111213);

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();

    return 0;
}