// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-18

// When a function calls itself it is called recursion and the function which is calling itself is called 
// a recursive function. The recursive function consists of a base case and recursive condition. 
// It is very important to add a base case in recursive function otherwise recursive function will never 
// stop executing. 

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return (fib(n-2)+fib(n-1));
}

// fib(5)   = fib(3) + fib(4)
//          = fib(1) + fib(2) + fib(2) + fib(3)
//          = 1 + fib(0) + fib(1) + fib(0) + fib(1) + fib(1) + fib(2)
//          = 1 + 1 + 1 + 1 + 1 + 1 + fib(0) + fib(1)
//          = 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1  

int main(){
    // Factorial of a number :
    // 6! = 6*5*4*3*2*1
    // 0! = 1
    // n! = n*(n-1)!

    int a;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    // Fibonacci series :
    cout<<"The term at "<<a<<"th index of Fibonacci series is "<<fib(a)<<endl; 
    return 0;
}