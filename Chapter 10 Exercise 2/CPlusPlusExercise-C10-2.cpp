#include "IntegerSet.h"

int main() {
	// start driver for IntegerSet
	srand(time(NULL)); //randomize set of numbers
	int a1[10];
	int a2[10];

	IntegerSet set1;
	IntegerSet set2;
	IntegerSet set3;
	IntegerSet set4;

	// initialize values for a1 
	for (int i = 0; i < 10; i++) {
		a1[i] = rand() % 100;
	}

	// initialize values for a2
	for (int i = 0; i < 10; i++) {
		a2[i] = rand() % 100;
	}

	set1.setValues(a1, 10);
	set2.setValues(a2, 10);
	set1.insertElement(99);	//insert #99 in set 1
	set2.insertElement(99);	//insert #99 in set 2

	set3 = set1.unionOfSets(set2);
	set4 = set1.intersectionOfSets(set2);
	
	//set 1 print
	cout << "Set 1: ";
	set1.printSet();
	cout << endl;

	//set 2 print
	cout << "Set 2: ";
	set2.printSet();
	cout << "\n\n";

	//print union of set 1 and set 2
	cout << "Union of sets are: ";
	set3.printSet();
	cout << endl;

	//print intersection of set 1 and set 2
	cout << "Intersection of sets are: ";
	set4.printSet();
	cout << endl;

	//print if set 1 is equal to set 2
	cout << "The sets are  ";
	if (set1.isEqualTo(set2) == 1) {
		cout << "EQUAL";
	}
	else if (set1.isEqualTo(set2) == 0) {
		cout << "NOT EQUAL";
	}
	cout << endl;

	return 0;
}