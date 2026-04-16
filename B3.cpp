#include <iostream>
using namespace std;

class Box
{
    double length, width, height;

public:
    // Constructor
    Box(double l, double w, double h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Display function
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
    }

    // Friend function declaration
    friend Box operator+( Box b1, Box b2);
};

// Friend function definition
Box operator+( Box b1,  Box b2)
{
    return Box(b1.length + b2.length,
               b1.width + b2.width,
               b1.height + b2.height);
}

int main()
{
    // Create two Box objects
    Box b1(10, 5, 2);
    Box b2(12, 7, 3);

    // Add objects using overloaded + operator
    Box b3 = b1 + b2;

    // Display results
    cout << "\nBox 1:\n";
    b1.display();

    cout << "\nBox 2:\n";
    b2.display();

    cout << "\nBox 3 (b1 + b2):\n";
    b3.display();

    return 0;
}
