//Notes :-->    https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-24

// Static Members :- When a static data member is created, there is only a single copy of the data member 
//                   which is shared between all the objects of the class. 

// Static Methods :- When a static method is created, they become independent of any object and class. 
//                   Static methods can only access static data members and static methods. Static 
//                   methods can only be accessed using the scope resolution operator. 

#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;       // Its default value is 0;
                            // Static data members need to be defined outside class also.
public:
    void setData(void)
    {
        cout<<"Enter employee id :- ";
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"Employee no. "<<count<<" has id number "<<id<<endl;
    } 

    static void getCount(void)                      // This is static member function.
    {
        // cout<<id;       --> This will throw error because static func. and access only static members.
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee :: count;
// int Employee :: count = 1000;            // Default value of static member is 0; it can be changed here.

#include<iostream>
using namespace std;

int main()
{
    Employee arpit, akash, simran;
    // arpit.id = 1;
    // arpit.count = 1;         // cannot do this as id and count are private

    arpit.setData();
    arpit.getData(); 
    arpit.getCount();

    
    akash.setData();
    akash.getData();
    akash.getCount();

    
    simran.setData();
    simran.getData();
    simran.getCount();   

    return 0;
}