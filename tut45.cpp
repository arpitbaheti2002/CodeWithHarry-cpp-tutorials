// Notes :-->   https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-45

#include<iostream>
using namespace std;
/*
    Inheritance:
    Student --> test
    Student --> sports
    test --> result
    sports --> result
*/

class Student
{
protected:
    int roll_no;
public:
    void set_number(int a){
        roll_no = a;
    }

    void print_number(){
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};

class Test : public virtual Student
{
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }

    void print_marks(void){
        cout<<"Your marks are as follows :- "<<endl
            <<"Maths = "<<maths<<endl
            <<"Physics = "<<physics<<endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;
public:
    void set_score(int s){
        score = s; 
    }

    void print_score(void){
        cout<<"Your PT score is : "<<score<<endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float total;
public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};

int main(){
    Result arpit;
    arpit.set_number(2);
    arpit.set_marks(92, 92);
    arpit.set_score(5);
    arpit.display();   
    return 0;
}