// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-68

#include<iostream>
using namespace std;

template <class T>

class Arpit{
    public:
        T data;
        Arpit(T a){
            data = a;
        }
        void display();
};

template <class T>                     // this way we can write definition of function outside class
void Arpit<T>::display(){
    cout<<data<<endl;
}

void function(int a){
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void function(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
    // Arpit <float> a(5.7);
    // Arpit<char> a('a');
    Arpit<int> a(7); 

    cout<<a.data<<endl;
    a.display();

    function(4);                // Perfect match is given first priority
    function(4.32);
    return 0;
}