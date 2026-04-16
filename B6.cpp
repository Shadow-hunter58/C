//23.find volumes of box and cylinder and also the total volume using friend function
// Lab Program


#include <iostream>
#include<cmath>
using namespace std;


class Cylinder;

class Box 
{
    private:
        double length, width, height;
    public:
        Box(double l, double w, double h) 
        {
            length = l; 
            width = w; 
            height = h;
        }
        
        double getVolume() 
        { 
        return length * width * height; 
        }

        // Friend function declaration
        friend void totalVolume(Box b, Cylinder c);
};

class Cylinder 
{
    private:
        double radius, height;
    public:
        Cylinder(double r, double h) 
        {
            radius = r; 
            height = h;
        }

        double getVolume() 
        { 
        return M_PI * radius * radius * height; 
        }

        // Friend function declaration
        friend void totalVolume(Box b, Cylinder c);
};

// Friend function definition
void totalVolume(Box b, Cylinder c) 
{
    double volBox = b.getVolume();
    double volCyl = c.getVolume();
    double total = volBox + volCyl;

    cout << "Volume of Box: " << volBox << endl;
    cout << "Volume of Cylinder: " << volCyl << endl;
    cout << "Total Combined Volume: " << total << endl;
}

int main() {
    // Create objects with dimensions
    Box b(10, 5, 2);           
    Cylinder c(3, 7);         

    // Call the friend function
    totalVolume(b, c);

    return 0;
}




