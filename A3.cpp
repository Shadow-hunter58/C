#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee
{
private:
	string name;
	int empid;
	double basic,gross,net,da,it;
	
public:
	void read_det() 
	{	
		
        cout <<"Enter employee name:"<<endl;
        cin>>name;
        cout <<"Enter employee ID:"<<endl;
        cin >>empid;
        cout <<"Enter basic salary:"<<endl;
        cin >> basic;
        cout<<"Enter DA:"<<endl;
        cin>>da;
        cout<<"Enter Income tax:"<<endl;
        cin>>it;
    }
    
    void calcNet()
    {
    	gross = basic + ((da/100) * basic);
        net = gross - ((it/100) * gross);
        cout <<"Name of the employee: "<< name << endl;
        cout <<"Employee ID: "<<empid<<endl;
        cout <<"Gross salary = "<<gross<<endl;
        cout <<"Net salary = "<<net<<endl;
         cout<<"Basic salary = " << basic <<endl;
    }
};


int main()
{
	int i, n;
	cout<<"Enter the number of Employees:"<<endl;
	cin>>n;
	Employee emp[100];
	
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Enter the details of Employee "<<(i+1)<<":"<<endl;
		emp[i].read_det();
	}

	for(i=0;i<n;i++)
	{
		cout<<endl<<"Salary details of Employee "<<(i+1)<<" is :"<<endl;
		emp[i].calcNet();
	}

return 0;
}







