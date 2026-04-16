#include <iostream>
using namespace std;
class Box
{
static int count;   // Static member variable
public:
// Constructor
    Box()
    {
        count++;
        cout << "\nA box object has been created " << endl;
        cout << "Current Count = " << count << endl;
    }
    // Destructor
    ~Box()
    {
        count--;
        cout << "\nA box object has been destroyed " << endl;
        cout << "Current Count = " << count << endl;
    }
};
// Definition of static member 
int Box::count = 0;
int main()
{
    Box b1;   // count = 1
    {
        Box b2;   // count = 2
    }            // b2 destroyed here → count = 1
    Box b3;   // count = 2
    return 0; // b3 and b1 destroyed → count = 0
}
