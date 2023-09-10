#include "StringManipulator.h"

void displayArray(char(*arr), int num) {
	for (int i = 0; i < num; i++) {
		cout << *(arr + i);
	}
	cout << endl;
}

int main() {

	char myArray1[] = "happy birthday to you"; //21
	char myArray2[] = "merry christmas to you sadsa"; //15
	char b[] = {'/0'};

	StringManipulator a;

	//len function
	cout << "Length of string is " << a.getStringLength(myArray1)
		<< endl;

	//compare function
	cout << "Compare array 1 with array 2 = "
		<< a.compareArrays(myArray1, myArray2, 10) << endl;
	
	//copy function
	a.copy(myArray1, myArray2, 5);
	displayArray(myArray1, 21);

	//append function
	a.append(myArray1, myArray2, 5);
	displayArray(myArray1, 27);



	return 0;
}