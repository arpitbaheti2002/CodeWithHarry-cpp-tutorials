// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-25

// Array of objects

#include<iostream>
using namespace std;

class Employee
{
    int eId;
    int salary;

public:
    void setId(void)
    {
        cout<<"Enter Employee id :- ";
        cin>>eId;
        cout<<"Enter salary :- ";
        cin>>salary;
    }

    void getId(void)
    {
        cout<<"The employee id is "<<eId<<" and the salary is Rs "<<salary<<endl;
    }
};

int main()
{
    // Employee arpit, akash, harry, simran;
    // arpit.setId();
    // arpit.getId();

    class Employee fb[4];

    for(int i=0; i<4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}