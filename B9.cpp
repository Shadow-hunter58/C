#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    // Virtual function
    virtual void CalculateArea()
    {
        cout << "Area not defined for generic shape." << endl;
    }

    // Virtual destructor (good practice)
    virtual ~Shape() {}
};

class Rectangle : public Shape
{
    double l, b;

public:
    Rectangle(double length, double breadth)
    {
        l = length;
        b = breadth;
    }

    void CalculateArea() override
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape
{
    double b, h;

public:
    Triangle(double base, double height)
    {
        b = base;
        h = height;
    }

    void CalculateArea() override
    {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

class Circle : public Shape
{
    double r;

public:
    Circle(double radius)
    {
        r = radius;
    }

    void CalculateArea() override
    {
        cout << "Area of Circle = " << M_PI * r * r << endl;
    }
};

int main()
{
    Shape* s = nullptr;
    int choice;
    double length, breadth, base, height, radius;

    while (true)
    {
        cout << "\n1. Rectangle\n2. Triangle\n3. Circle\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Exiting...\n";
            return 0;

        case 1:
            cout << "Enter length and breadth: ";
            cin >> length >> breadth;
            s = new Rectangle(length, breadth);
            break;

        case 2:
            cout << "Enter base and height: ";
            cin >> base >> height;
            s = new Triangle(base, height);
            break;

        case 3:
            cout << "Enter radius: ";
            cin >> radius;
            s = new Circle(radius);
            break;

        default:
            cout << "Invalid choice!\n";
            continue;
        }

        // Runtime polymorphism
        if (s != nullptr)
        {
            s->CalculateArea();  // Calls correct function at runtime
            delete s;
            s = nullptr;
        }
    }

    return 0;
}
