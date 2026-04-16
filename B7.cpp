// Banking system using single level inheritences

#include <iostream>
using namespace std;

class BankAcc
{
protected:
	string name;
	double balance;

public:	
	BankAcc(string n, double b) 
	{
        name = n;
        balance = b;
    }
	
	void deposit(double a)
	{
		double d_amt=a;
		balance=balance+d_amt;
		cout<<" Deposited: "<<d_amt<<endl;
		cout<<"Current balance: "<<balance<<endl;	
	}
	
	void withdraw(double amt)
	{
		if (amt<= balance)
		{
			balance=balance-amt;
			cout<<" Withdrawn: "<<amt<<endl;
			cout<<"Current balance: "<<balance<<endl;
		}
		else
			cout<<"Insuficient balance"<<endl;	
	}	
};

class SavingsAcc : public BankAcc
{
	double intrest;
	double intrest_amt;
public:	
	SavingsAcc(string n, double b, double r) : BankAcc(n, b) 
	{
        intrest = r;
        intrest_amt=0;
    }	
	
	void addintrest() 
	{
        intrest_amt = balance * (intrest/ 100);
        balance = balance+intrest_amt;
        cout << "intrest added: " << intrest_amt << endl;
        cout << "Current Balance: " << balance <<"\n"<< endl;	
    }
    
	void display()
	{
		cout<<"\nAccount status: "<<endl;
		cout << "Account Holder: " << name << endl;
        cout << "intrest Rate: " << intrest << "%" << endl;
        cout<< "Intrest amount: "<< intrest_amt<< endl;
        cout << "Current Balance: " << balance <<"\n"<< endl;	
	}	
};

int main()
{
	SavingsAcc mySavings("Chiranthan", 1000.0, 10);
	
    mySavings.display();
    mySavings.deposit(500);
    mySavings.addintrest();
    mySavings.withdraw(200);
    mySavings.display();
    
return 0;
}











