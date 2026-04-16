#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        cout << "Parameterized Constructor called\n";
    }

    // Copy constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
        cout << "Copy Constructor called\n";
    }

    // Function to calculate area
    int calculateArea()
    {
        return length * breadth;
    }

    // Display function
    void display()
    {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main()
{
    // Default constructor
    Rectangle r1;
    r1.display();

    // Parameterized constructor
    Rectangle r2(10, 5);
    r2.display();
    cout << "Area of r2: " << r2.calculateArea() << endl;

    // Copy constructor
    Rectangle r3 = r2;
    r3.display();
    cout << "Area of r3: " << r3.calculateArea() << endl;

    return 0;
}
