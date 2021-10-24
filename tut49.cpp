// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-49

#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
public:
    Test (int i, int j) : a(i), b(j){constructor - body}
};
*/

class Test{
    int a;
    int b;
public:
    Test() {}

    // Test (int i, int j) : a(i), b(j){
    // Test (int i, int j) : a(i), b(i + j){
    // Test (int i, int j) : a(i), b(2 * j){
    Test (int i, int j) : a(i), b(a + j){            //--> This will run perfectly as a is initialized first.
    // Test (int i, int j) : b(j), a(i + b){               /*--> RED FLAG : This will create problem because a will
                                                           //   will be inizialized first as it is declared first. */ 
        cout<<"Constructor executed"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
    
    /*
    Test (int i, int j) : a(i){ 
        b = j;               
        cout<<"Constructor executed"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }

    Test (int i, int j){
        a = i; 
        b = j;               
        cout<<"Constructor executed"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
    */
};

int main(){
    Test t;
    t = Test(12, 23);
    return 0;
}