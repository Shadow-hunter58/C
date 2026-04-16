#include <iostream>
using namespace std;

class Box
{
private:
    double length, breadth, height;

public:
    // Constructor with default arguments
    Box(double l, double b = 1, double h = 1)
    {
        length = l;
        breadth = b;
        height = h;
    }

    // Function to calculate volume
    double volume()
    {
        return length * breadth * height;
    }

    // Function to compare volumes of two boxes
    void compare(Box b)
    {
        if (this->volume() > b.volume())
            cout << " box 2 has greater volume.\n";
        else if (this->volume() < b.volume())
            cout << " box 3 has greater volume.\n";
        else
            cout << "Both boxes have equal volume.\n";
    }

    // Display function
    void display()
    {
        cout << "Length: " << length 
             << ", Breadth: " << breadth 
             << ", Height: " << height << endl;
    }
};

int main()
{
    // Creating objects with different arguments
    Box b1(5);           // breadth=1, height=1
    Box b2(5, 2);        // height=1
    Box b3(5, 2, 3);     // all values provided

    cout << "Box 1:\n";
    b1.display();
    cout << "Volume: " << b1.volume() << endl << endl;

    cout << "Box 2:\n";
    b2.display();
    cout << "Volume: " << b2.volume() << endl << endl;

    cout << "Box 3:\n";
    b3.display();
    cout << "Volume: " << b3.volume() << endl << endl;

    // Comparing two boxes
    cout << "Comparing Box 2 and Box 3:\n";
    b2.compare(b3);

    return 0;
}
