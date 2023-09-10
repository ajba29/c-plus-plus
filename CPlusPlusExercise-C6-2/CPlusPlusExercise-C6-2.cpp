#include "Power.h"

int main() {

	int base;
	int exponent;
	int answer;

	Power calculator;

	cout << "Enter base:";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exponent;

	answer = calculator.getPower(base, exponent);

	cout << answer;
}