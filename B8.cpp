// devolop a c++ program to demonstrate multiple inheritance by implementing two base classess alpha and beta each containing a protected data member and a constructor to intialize it. create a derived class gamma that inherits from both alpha and  beta with a constructor that initializes all the data members and a member function to display the values of base class members along with any additional members of gamma. in the main function. create  an object of gamma and use its member funnctions to display all the values of data members.

#include <iostream>
using namespace std;

class alpha 
{
protected:
    int a;
public:
    alpha(int val) 
    {
    	a=val;
        cout << "Alpha is initialized." << endl;
    }  
};

class beta 
{
protected:
    int b;
public:
    beta(int val) 
    {	2. Basic + Bonus
3. Basic + Bonus + Overtime
0. Exit

    	b=val;
        cout << "Beta is initialized." << endl;
    }
};

class gamma : public alpha, public beta 
{
private:
    int g;
public:
	gamma(int v1, int v2, int v3) : alpha(v1), beta(v2)
	{
		g=v3;
        cout << "Gamma is initialized." << endl;
    }
    void display() 
    {
        cout << "\nValue from Alpha : " << a << endl;
        cout << "Value from Beta  : " << b << endl;
        cout << "Value from Gamma : " << g << endl;
    }
};

int main()
{
	gamma g(140,2045,3450);
	g.display();

return 0;
}





