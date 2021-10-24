// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-22

// OOPs - Classes and objects.

// C++  --> initially called --> C with class by Strousreoup

// class --> extension o structure (in C)

// Limitations of structures :-
            // - members are public.
            // - No methods.

// Classes --> structures + more
//         --> can have methods and properties
//         --> can make few members as private & few as public.

// Strctures in c++ are typedef.

// you can declare objects along with the class declaration like this :
// class Employee{
//     //class definition
// }arpit, akash;

// arpit.salary = 44; makes no sense if salary is private

//********** Nesting of member functions **********
// If one member function is called inside the other member function of the same class it is called nesting 
// of a member function. 

#include<iostream>
#include<string>

using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"Enter your binary number :- ";
    cin>>s;
    chk_bin();
}

void binary :: chk_bin()
{
    for(int i= 0; i < s.length(); i++)
    {
        if((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout<<"Invalid binary format."<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment()
{
    for(int i= 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display()
{
    cout<<"Displaying your binary number :- "<<endl;
    // cout<<s<<endl;
    for(int i= 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}