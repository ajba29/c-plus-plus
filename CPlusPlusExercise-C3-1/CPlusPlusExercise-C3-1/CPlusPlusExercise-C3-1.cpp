#include "Account.h"

int main()
{
	int num;
	int secondNum;

	//object 1 tester start

	cout << "How much is your initial deposit? ";
	cin >> num;
	Account object1(num); //initialize values using int num input

	//object 1 tester for "credit" member function of Class Account
	cout << "How much is your deposit? ";
	cin >> secondNum;
	object1.credit(secondNum);

	//object 1 tester for "getBalance" member function of Class Account
	cout << "Balance is " << object1.getBalance() << endl;

	//object 1 tester for "debit" member function of Class Account
	cout << "How much is your widhtrawal? ";
	cin >> secondNum;
	if (object1.debit(secondNum) == false)
	{
		cout << "Debit amount exceeded account balance.";
	}
	

	//object 1 tester for "getBalance" member function of Class Account
	cout << "Balance is " << object1.getBalance() << endl;

	//object 2 tester start

	cout << "\nHow much is your initial deposit? ";
	cin >> num;
	Account object2(num);

	//object 2 tester for "credit" member function of Class Account
	cout << "How much is your deposit? ";
	cin >> secondNum;
	object2.credit(secondNum);


	//object 2 tester for "getBalance" member function of Class Account
	cout << "Balance is " << object2.getBalance() << endl;

	//object 2 tester for "debit" member function of Class Account
	cout << "How much is your widhtrawal? ";
	cin >> secondNum;
	object2.debit(secondNum);


	//object 2 tester for "getBalance" member function of Class Account
	cout << "Balance is " << object2.getBalance() << endl;

}