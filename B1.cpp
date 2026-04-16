/*Devolop a c++ program to demonstrate funcyion overloading by implementing a salary calculation system for employees Create a class salary that contains overloaded functions to compute salary based on diffrent scenerios , such as basic salary only, basic salary with bonus and basic salary with bonus and overtime. the program should accept user input for the required parameters, invoke the appropriate overloaded function depending on the number of arguments provided and display the calculated total salary.*/

/*1BWrite a C++ program to demonstrate function overloading for calculating 
employee salary using different parameters. rite a C++ program to demonstrate function overloading for calculating 
employee salary using different parameters. */
#include <iostream>
#include <cmath>
using namespace std;

class Salary
{
	public:
	
	void Calculate(int basic)
	{
		cout<<"Total salary is:"<<basic<<endl;	
	}
	
	void Calculate(int basic, int bonus)
	{
		cout<<"Total salary is:"<<basic+bonus<<endl;	
	}
	
	void Calculate(int basic, int bonus, int overtime)
	{	
		cout<<"Total salary is:"<<basic+bonus+overtime<<endl;
	}
};


int main()
{
	Salary s;
	int basic, bonus, ot;
	int choice;
	
	while(1)
	{
		cout << "\n--- Salary Calculation System ---" << endl;
        cout << "1. Basic Salary Only" << endl;
        cout << "2. Basic + Bonus" << endl;
        cout << "3. Basic + Bonus + Overtime" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: "; 
        cin >> choice;
        
		switch(choice)
		
		{
		case 0: cout<<"Exiting.."<<endl;
				return 0;
				
		case 1: cout<<"\nEnter basic salary:"<<endl;
				cin>>basic;
				s.Calculate(basic);	  
				break;
				
		case 2: cout<<"\nEnter basic salary and bonus:"<<endl;
				cin>>basic>>bonus;
				s.Calculate(basic, bonus);				
				break;
		
		case 3: cout<<"\nEnter basic salary bonus and overtime:"<<endl;
				cin>>basic>>bonus>>ot;
				s.Calculate(basic, bonus, ot);		
				break;
				
		default: cout<<"Invalid Choice"<<endl;
		}
	}

	return 0;
}
