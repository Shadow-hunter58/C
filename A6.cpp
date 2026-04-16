/* Create a C++ program to demonstrate the concept of copy constructors in 
classes. Define a class Point to represent a point in a 2D plane with x and y 
coordinates. Implement a copy constructor to create a copy of an existing 
Point object. Test the program by creating two Point objects, p1 and p2, where 
p2 is a copy of p1. Display the coordinates of both points to verify that the 
copy constructor works correctly. Concept : copy constructor, Points.cpp 
*/
#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    // Parameterized constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    // Copy constructor
    Point(const Point &p1)
    {
        x = p1.x;
        y = p1.y;
    }

    // Getter functions
    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }
};

int main()
{
    // Create original object
    Point p1(10, 15);

    // Create copy using copy constructor
    Point p2 = p1;

    // Display values
    cout << "P1.x = " << p1.getx() << endl;
    cout << "P1.y = " << p1.gety() << endl;

    cout << "P2.x = " << p2.getx() << endl;
    cout << "P2.y = " << p2.gety() << endl;

    return 0;
}


