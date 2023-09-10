#include "Classes.h"

int main() {
	// CHAPTER 10 CLASSES

	Increment value(10, 5);

	cout << "Before incrementing: ";
	value.print();

	for (int i = 1; i <= 3; i++) {
		value.addIncrement();
		cout << "After increment " << i << ":";
		value.print();
	}

	return 0;
}