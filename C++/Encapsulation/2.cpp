//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acno,balance;
	public :
		void set(double a,double b)
		{
			acno = a;
			balance = b;
		}
		void deposit(double amnt)
		{
			balance = balance + amnt;
		}
		void withdraw(double amnt)
		{
			if(amnt<balance)
			{
				balance = balance - amnt;
			}
		}
		void get()
		{
			cout<<"\nAccount no. = "<<acno;
			cout<<"\nBalance = "<<balance<<endl;
		}
};
int main()
{
	BankAccount b1,b2;
	b1.set(123456,10000);
	b2.set(789456,20000);
	
	b1.deposit(5000);
	b2.deposit(25000);
	
	b1.withdraw(12500);
	b2.withdraw(60000);
	
	b1.get();
	b2.get();
	return 0;
}
