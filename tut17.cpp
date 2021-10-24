// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-17

#include<iostream>
using namespace std;

inline int product(int x, int y)
{
    // Not recommended to use below line with inline
    // static c=0;          // This executes only once.i.e. value of c is retaied
    // c=c+1;             // This increases the value of c by 1 everytime fuction is called.
    return (x*y);
}

float moneyReceived(int initialMoney, float rate=1.04)
{
    return (initialMoney * rate);
}

// Constant Argument
int strLen(const char *p)
{
    // Value at *p cannot be changed in this function
}

int main(){
    int a, b;
    // cout<<"Enter the value of a and b :- "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is :- "<<product(a,b)<<endl;
    // cout<<"The product of a and b is :- "<<product(a,b)<<endl;
    // cout<<"The product of a and b is :- "<<product(a,b)<<endl;
    // cout<<"The product of a and b is :- "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have Rs."<<money<<" you will receive Rs."<<moneyReceived(money)<<" after 1 year"<<endl;
    cout<<"If you are VIP, and have Rs."<<money<<" you will receive Rs."<<moneyReceived(money, 1.10);
    cout<<" after 1 year"<<endl;
    
    return 0;
}