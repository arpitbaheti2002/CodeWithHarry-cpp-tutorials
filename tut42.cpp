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

// OG solution in tut47.cpp

#include<iostream>
#include<cmath>
using namespace std;

class SimpCalc
{
protected:
    float a, b, res1;
public:
    void setNumber1()
    {
        cout<<"Enter the two numbers :- "<<endl;
        cin>>a>>b;
    }

    void result1(int n)
    {
        if (n == 1)
        {
            res1 = a + b;
        }
        else if (n == 2)
        {
            res1 = a - b;
        }
        else if (n == 3)
        {
            res1 = a * b;
        }
        else
        {
            res1 = a / b;
        }
    }

    void disp_res1()
    {
        cout<<"Your result is "<<res1<<endl;
    }
};

class SciCalc
{
protected:
    float c, d, res2, res3;
public:
    void setNumber2()
    {
        cout<<"Enter the two numbers :- "<<endl;
        cin>>c>>d;
    }

    void result2(int n)
    {
        if (n == 1)
        {
            res2 = sin(c);
            res3 = sin(d);
        }
        else if (n == 2)
        {
            res2 = cos(c);
            res3 = cos(d);
        }
        else if (n == 3)
        {
            res2 = tan(c);
            res3 = tan(d);
        }
        else
        {
            res2 = log(c);
            res3 = log(d);
        }
    }

    void disp_res2()
    {
        cout<<"Your results are "<<res2<<" and "<<res3<<endl;
    }
};

class Hybrid_Calc : public SimpCalc, public SciCalc
{

};

int main(){
    Hybrid_Calc cal;
    int n;
    cout<<"Select your operation :- "<<endl;
    cout<<"1. sum (+) "<<endl;
    cout<<"2. substract (-) "<<endl;
    cout<<"3. multiply (*) "<<endl;
    cout<<"4. division (/) "<<endl;
    cout<<"5. sine (sin) "<<endl;
    cout<<"6. cosine (cos) "<<endl;
    cout<<"7. tangent (tan) "<<endl;
    cout<<"8. logaritms (log) "<<endl;
    cin>>n;

    switch(n)
    {
        case 1 : cal.setNumber1();
                 cal.result1(1);
                 cal.disp_res1();
                 break;
        case 2 : cal.setNumber1();
                 cal.result1(2);
                 cal.disp_res1();
                 break;
        case 3 : cal.setNumber1();
                 cal.result1(3);
                 cal.disp_res1();
                 break;
        case 4 : cal.setNumber1();
                 cal.result1(4);
                 cal.disp_res1();
                 break;
        case 5 : cal.setNumber2();
                 cal.result2(1);
                 cal.disp_res2();
                 break;
        case 6 : cal.setNumber2();
                 cal.result2(2);
                 cal.disp_res2();
                 break;
        case 7 : cal.setNumber2();
                 cal.result2(3);
                 cal.disp_res2();
                 break;
        case 8 : cal.setNumber2();
                 cal.result2(4);
                 cal.disp_res2();
                 break;
        default : cout<<"Invalid Input"<<endl;
                  break;
    }
    return 0;
}

