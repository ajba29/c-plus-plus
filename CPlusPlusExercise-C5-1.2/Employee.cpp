#include "Employee.h"

void Employee::setWage(int aWage) {
	wage = aWage;
}

int Employee::getWage() {
	return wage;
}

int Employee::computeOvertimePay(int hours) {
	int overtimeWage;
	int overtimeHours;
	int total;
	overtimeWage = wage * 1.5;
	overtimeHours = hours - 40;
	total = (overtimeWage * overtimeHours);
	return total;
}

int Employee::getHourlyWorkerWage(int hours) {
	if (hours <= 40) {
		int total;
		total = wage * hours;
		return total;
	}
	else if (hours > 40) {
		int total;
		total = (wage * 40) + (computeOvertimePay(hours));
		return total;
	}
}

int Employee::getCommisionerWage(int gross) {
	int total;
	total = wage + (0.057 * gross);
	return total;
}

int Employee::getPieceWorkerWage(int pieces) {
	int total;
	total = wage * pieces;
	return total;
}
