#include <iostream>;
#include <string>
using namespace std;

class Account
{
private:
	int accountBalance;

public:

	Account(int x); //constructor for initializing member variable "accountBalance"

	bool debit(int); //member function debit

	void credit(int y); //member function credit

	int getBalance(); //member function getBalance





};