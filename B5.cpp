/*Design and implement a c++ program to add two distances measured in diffrent units. the program should define two 
classes DM and DB, to represent distances in metric(m and cm) and british units(feet and inches) respectively. implement 
an overloaded addition operator to add distances of diffrent units and return distances in british units(feet and 
inches)
Concepts: operator overloading, friend function
*/

#include <iostream>
#include <cmath>
using namespace std;

//class DB;
class DM
{
	int meters;
	float centimeters;
	
	public:
	DM(int m, float cm)
	{
		meters=m;
		centimeters=cm;
	}
	
	int getM()
	{
		return meters;
	}
	
	int getCm()
	{
		return centimeters;
	}
	
	//friend DB operator+(DM& dm, DB& db);
};


class DB
{
	int feets;
	float inches;
	
	public:
	DB(int ft, float in)
	{
		feets=ft;
		inches=in;
	}
	
	int getft()
	{
		return feets;
	}
	
	int getin()
	{
		return inches;
	}
	
	void display() 
	{
        cout << feets << " feet, " << inches << " inches" << endl;
    }
		
	//friend DB operator+( DB &db);
};


DB operator+(DM &dm, DB &db)
{
	int inchesDM = (dm.getM())*39.37 + (dm.getCm())*0.3937;
	int inchesDB = (db.getft())*12 + db.getin();
	
	int total_in = inchesDM+inchesDB;
	
	int final_feet = total_in/12;
	int final_inches =total_in%12;
	
	return DB(final_feet, final_inches);
}

int main()
{
	DM dm(10, 5);
	DB db(12, 6);
	
	DB res = dm + db;
	
	cout << "Result of addition in British units: "<<endl;
    res.display();

return 0;
}





