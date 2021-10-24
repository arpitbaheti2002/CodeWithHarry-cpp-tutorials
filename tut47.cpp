// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-47

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and 
        displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four 
        scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

/* Answers :- 
    1. Multiple Inheritence.
    2. public SimpleCalculator, public ScientificCalculator
    3. Successfully done.
    4. Code of SimpleCalculator and ScientificCalculator was reused in class HybridCalculator.
*/

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;
public:
    void getDataSimple()
    {
        cout<<"Enter the value of a :- "<<endl;
        cin>>a;
        cout<<"Enter the value of b :- "<<endl;
        cin>>b;
    }

    void performOperationsSimple()
    {
        cout<<"The value of a + b is "<<a + b<<endl;
        cout<<"The value of a - b is "<<a - b<<endl;
        cout<<"The value of a * b is "<<a * b<<endl;
        cout<<"The value of a / b is "<<a / b<<endl;
    }
};

class ScientificCalculator
{
    int a, b;
public:
    void getDataScientific()
    {
        cout<<"Enter the value of a :- "<<endl;
        cin>>a;
        cout<<"Enter the value of b :- "<<endl;
        cin>>b;
    }

    void performOperationsScientific()
    {
        cout<<"The value of sin(a) is "<<sin(a)<<endl;
        cout<<"The value of cos(a) is "<<cos(a)<<endl;
        cout<<"The value of tan(a) is "<<tan(a)<<endl;
        cout<<"The value of exp(a) is "<<exp(a)<<endl;
        cout<<endl;
        
        cout<<"The value of sin(b) is "<<sin(b)<<endl;
        cout<<"The value of cos(b) is "<<cos(b)<<endl;
        cout<<"The value of tan(b) is "<<tan(b)<<endl;
        cout<<"The value of exp(b) is "<<exp(b)<<endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}