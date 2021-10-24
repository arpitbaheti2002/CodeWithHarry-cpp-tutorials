// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-9

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age :- ";
    cin>>age;

    // 1. Selection control structures : if-else if-else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You are ot welcome to my party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born."<<endl;
    // }
    // else if(age == 18){
    //     cout<<"You will get a kid pass to my party"<<endl;
    // }
    // else {
    //     cout<<"You are welcome to my party"<<endl;
    // }

    // 2. Selection control structures : Switch Case statements
    switch(age)
    {
        case 18 :
            cout<<"Your age is 18"<<endl;
            break;
        case 72 :
            cout<<"Your age is 72"<<endl; 
            break;
        case 2 :
            cout<<"Your age is 2"<<endl;
            break;  
        default :
            cout<<"No special case"<<endl;
            break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}