#include <iostream>
using namespace std;

class Employee
{
private:
	int wage;
	int computeOvertimePay(int hours);

public:
	void setWage(int aWage);
	int getWage();
	int getHourlyWorkerWage(int hours);
	int getCommisionerWage(int gross);
	int getPieceWorkerWage(int pieces);
};
