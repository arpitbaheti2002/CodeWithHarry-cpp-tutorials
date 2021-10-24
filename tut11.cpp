// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-11

#include<iostream>
using namespace std;

int main(){
    // for(int i = 0; i<4 ; i++)
    // {
    //     if(i==2)
    //     {
    //         break;              // It breaks the loop.
    //     }
    //     cout<<i<<endl;
    // }

    for(int i=0; i<4; i++)
    {
        if(i==2)
        {
            continue;               // It breaks loop for current iteration only.
        }
        cout<<i<<endl;
    }

    return 0;
}