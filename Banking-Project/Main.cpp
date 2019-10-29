#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;

class Account
{
public:
	Account(string t_name, string t_id, float t_balance, char t_type)
	{
		customerName = t_name;
		accountID = t_id;
		currentBalance = t_balance;
		accountType = t_type;
	}

	string getCustomerName()
	{
		return customerName;
	}

	float getCurrentBalance()
	{
		return currentBalance;
	}

	void Deposit(float deposit)
	{
		currentBalance += deposit;
	}

	void Withdraw(float withdraw)
	{
		currentBalance -= withdraw;
	}

	void CloseAccount()
	{

	}

private:
	string customerName;
	string accountID;
	float currentBalance;
	char accountType;

};

int main()
{


	//TODO Loop program until close


	//TODO List menu options


	//TODO Handle each menu option
	/*
		1. New Account
		2. Deposit Amount
		3. Withdraw Amount
		4. Balance Enquiry
		5. List Accounts
		6. Close Account
		7. Modify Account
		8. Close
	*/

	//TODO Write Account information to binary file
	/*
		Open file:
		Write to file
		Close file:
	*/




	
}