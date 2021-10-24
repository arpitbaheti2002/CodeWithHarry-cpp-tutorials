#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    int x, y;
    friend float distance(Point, Point);
public:
    Point(int a, int b)         // Parameterized Constructor
    {
        x = a;
        y = b;
    }

    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")."<<endl;
    }
};

// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the 
// distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69

float distance(Point p1, Point p2)
{
    float dist;
    dist = sqrt(((p2.x - p1.x) * (p2.x - p1.x)) + (p2.y - p1.y) * (p2.y - p1.y));

    return dist;
}

int main()
{
    Point p(1, 0);
    p.displayPoint();

    Point q = Point(10, 0);
    q.displayPoint();

    cout<<"Distance between p and q is "<<distance(p, q)<<endl;
    return 0;
}