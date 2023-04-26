#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////// 
class BankAccount 
{ private: 
	double balance;                 //account balance 
public:
	//-------------------------------------------------------------- 
	BankAccount(double openingBalance) //constructor 
	{ balance = openingBalance; }
	//-------------------------------------------------------------- 
	void deposit(double amount)       
		//makes deposit
	{ balance = balance + amount; } 
		//-------------------------------------------------------------- 
	void withdraw(double amount)       //makes withdrawal 
	{ balance = balance - amount; } 
	//--------------------------------------------------------------
	void display()                     //displays balance 
	{ cout << “Balance=” << balance << endl; } };  //end class BankAccount
	//////////////////////////////////////////////////////////////// 
	int main() 
	{ BankAccount ba1(100.00);           //create account
	cout << “Before transactions, “; 
	ba1.display();                     //display balance
	ba1.deposit(74.35);                //make deposit 
	ba1.withdraw(20.00);               //make withdrawal
	cout << “After transactions,  “; 
	ba1.display();                     //display balance
	return 0; }  //end main()
