// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-14

#include<iostream>
#include<iomanip>
using namespace std;

typedef struct employee     // 9 bytes
{
    int eId;                // 4
    char favChar;           // 1
    float salary;           // 4
}emp;

union money       // 4 bytes - better memory management. But only one variable can be used.
{
    int rice;
    char car;
    float pound;
};

int main(){
    // enum Meal {breakfast, lunch, dinner};
    enum Meal {breakfast = 100, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    m1 = dinner;
    cout<<m1<<endl;

    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice<<endl;
    // m1.car = 'c';
    // cout<<m1.car<<endl;
    // cout<<m1.rice<<endl;

    // emp arpit;
    // struct employee akash;  

    // arpit.eId = 1;
    // arpit.favChar = 'a';
    // arpit.salary = 1000000;
    // cout<<"The employee Id is "<<arpit.eId<<endl;
    // cout<<"The favourite character is "<<arpit.favChar<<endl;   
    // cout<<"The salary is "<<fixed<<arpit.salary<<endl;  
    return 0;
}