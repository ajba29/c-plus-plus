#include "Account.h"

Account::Account(int x)
{
	accountBalance = x;
}

bool Account::debit(int amount)
{

	if (amount <= accountBalance)
	{
		accountBalance = accountBalance - amount;
		return true;
	}
	else if (amount>accountBalance)
	{
		return false;
	}
}

void Account::credit(int y)
{
	accountBalance = accountBalance + y;
}

int Account::getBalance()
{
	return accountBalance;
}
