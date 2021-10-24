// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-23

// The memory is allocated to variables  of the class when the object is created and not when class is declared. 
// Each object has individual copy of variables of the class.
// Memory is allocated to the function only once when the class is declared. Objects don’t have individual 
// copies of functions only one copy is shared among each object.

#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int price[100];
    int counter;

public:
    void initCounter(void){
        counter = 0;
    }

    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice(void)
{
    cout<<"Enter Item Id :- ";
    cin>>itemId[counter];
    cout<<"Enter price of this item :- ";
    cin>>price[counter];
    counter++;
}

void shop :: displayPrice(void)
{
    for(int i=0; i<counter; i++)
    {
        cout<<"The Price of item with Id "<<itemId[i]<<" has price Rs. "<<price[i]<<endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}