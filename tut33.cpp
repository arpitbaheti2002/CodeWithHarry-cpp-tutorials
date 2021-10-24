#include<iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){}              // Initializing this is important. As compiler wont be able to initialize any object
                                 // with no parameters. eg. bd3
    BankDeposit(int p, int y, float r);     // r can have value like 0.04
    BankDeposit(int p, int y, int r);       // r can have value like 4
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = p;
    for(int i = 0; i<years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;                  // Important to make it float
    returnValue = p;
    for(int i = 0; i<years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit :: show()
{
    cout<<"The principal amount was Rs. "<<principal
        <<". Return value after "
        <<years<<" years is Rs. "<<returnValue<<endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    
    return 0;
}