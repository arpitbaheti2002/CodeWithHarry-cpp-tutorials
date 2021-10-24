// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-19

#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return (a + b);
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return (a + b + c);
}

// Volume of cuboid
int volume(int l, int b, int h){
    return l * b * h;
}

// Volume of cube 
int volume(int s){
    return s * s * s;
}

// Volume of cylinder
int volume(int r, int h){
    return 3.14*r*r*h;
}

int main(){
    cout<<"The sum of 3 and 7 is "<<sum(3, 7)<<endl;
    cout<<"The sum of 3, 7 and 9 is "<<sum(3, 7, 9)<<endl;
    cout<<"The volume of cuboid with sides 3, 7, 8 is "<<volume(3, 7, 8)<<endl;
    cout<<"The volume of cube with sides 6 is "<<volume(6)<<endl;
    cout<<"The volume of cylinder with radius 4 and height 9 is "<<volume(4, 9)<<endl;
    
    return 0;
}