// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-67

#include<iostream>
using namespace std;

// float funcAverage1(float a, float b){
//     float avg = (a+b)/2.0;
//     return avg;

// }

// float funcAverage2(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template<class T1, class T2>

float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>

void swaap(T &a, T &b){                 // swap is already present in namepace std
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    // a=funcAverage1(5.1, 2.4);
    a=funcAverage(5.1, 2.4);
    printf("The average of these numbers is %.3f",a);

    int b;
    // a=funcAverage2(5, 2);
    a=funcAverage(5, 2);
    printf("\nThe average of these numbers is %f",a);

    int x = 6, y = 9;
    swaap(x, y);
    cout<<"\n"<<x<<" ,"<<y<<endl;

    return 0;

}