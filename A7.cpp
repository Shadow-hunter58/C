/*Devolop a c++ program to demonstrate the principle encapsulation by keeping attributes private 
and accessing them through public member functions. create a class named box with private data members
 height width and length. provide public setter functions such as setheight(), setlength() and setwidth()
  to assign values to these attributess. also implement a member function volume() that calculates and 
  returens volume of the box. in the main function create the object of box class assign values to
   dimensions using setter methods and finally compute and display the volume of the box*/


#include <iostream>
using namespace std;

class Box 
{
private:
    double length;
    double width;
    double height;

public:
    void setLength(double l) 
    {
        length = l;
    }

    void setWidth(double w) 
    {
        width = w;
    }

    void setHeight(double h) 
    {
        height = h;
    }

    double calculateVolume() 
    {
        return length * width * height;
    }
};

int main() 
{
    Box myBox;
  
    myBox.setLength(10);
    myBox.setWidth(20);
    myBox.setHeight(30);

    cout << "The Volume of the Box is: " << myBox.calculateVolume()<<endl;
    return 0;
}






