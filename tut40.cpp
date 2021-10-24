// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-40

#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student :: set_roll_number(int r)
{
    roll_number = r;
}

void Student :: get_roll_number(void)
{
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;
public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(void)
{
    cout<<"The marks obtained in maths are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<physics<<endl;
}

class Result : public Exam
{
    float percentage;
public:
    void display_result()
    {
        cout<<"Your result is "<< (maths + physics)/2<<"%"<<endl;
    }
};

int main(){
    /* Notes :
        If we are inheritng B from A and C from B: [A ---> B ---> C]
        1. A is the base class for B and B is the base class for C.
        2. A --> B --> C is called Inheritance path.
    */

    Result arpit;
    arpit.set_roll_number(19);
    arpit.set_marks(92, 92);
    arpit.display_result();
    return 0;
}