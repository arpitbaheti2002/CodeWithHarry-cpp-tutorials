// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-52

#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
public:
    void setData(int a, float b){
        id = a;
        price = b;
    }

    void getData(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};

int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr;

    int p, i;
    float q;

    for(i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of the Item :- "<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr -> setData(p, q);
        ptr++;
    } 
/*
    Before execution of the above loop :
    item1   item2   item3
    ^
    |
    ptr

    After execution of the above loop :
    item1   item2   item3
                    ^
                    |
                    ptr

    Therefore, we need to set pointer back to item1 or make another pointer at beginning like ptrTemp
 */

    ptr = ptrTemp;

    for(i = 0; i < size; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptr -> getData();
        ptr++;
    }
    
    return 0;
}