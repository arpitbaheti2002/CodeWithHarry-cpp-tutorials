// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-13

#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[]= {33, 50, 75, 99};

    int mathMarks[4];
    mathMarks[0] = 10;
    mathMarks[1]= 34;
    mathMarks[2]= 69;
    mathMarks[3]= 95;

    cout<<"These are math marks :- "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[0] = 40;
    cout<<"These are marks :- "<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    // int i=0;
    // while(i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    // i = 0;
    // do
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<4);
    

    // Pointers and arrays :

    // Storing the address of an array into pointer is different than storing the address of a variable into 
    // the pointer because the name of the array is an address of the first index of an array. So to use 
    // ampersand "&" with the array name for assigning the address to a pointer is wrong.

    // &Marks --> Wrong
    // Marks --> address of the first block

    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<endl;
    
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}