#include "IntegerSet.h"

IntegerSet::IntegerSet(int a, int b, int c, int d, int e) {
	emptySet();

	if (valid(a)) {
		insertElement(a);
	}
	
	if (valid(b)) {
		insertElement(b);
	}

	if (valid(c)) {
		insertElement(c);
	}

	if (valid(d)) {
		insertElement(d);
	}

	if (valid(e)) {
		insertElement(e);
	}
}

void IntegerSet::emptySet(void) {
	for (int y = 0; y < 101; ++y) {
		set[y] = 0;
	}
}

void IntegerSet::inputSet(void) {
	int number;

	do {
		cout << "Enter an element (-1 to end): ";
		cin >> number;

		if (valid(number)) {
			set[number] = 1;
		}
		else if (number != -1) {
			cerr << "Invalid Element/n";
		}
	} while (number != -1);

	cout << "Entry complete.\n";
}

void IntegerSet::setPrint(void)const {
	int x=0;
	bool empty = true; //assume set is empty
	cout << '{';

	for (int u = 0; u < 101; ++u) {
		if (set[u]) {
			cout << setw(4) << u <<  (u % 10 == 0 ? "\n" : "");
			empty = false;
			++x;
		}

		if (empty) {
			cout << setw(4) << "---"; //display an empty set 96
			cout << setw(4) << "}" << '\n';
		}
	}
}

IntegerSet IntegerSet::unionOfIntegerSets(const IntegerSet& r) {
	IntegerSet temp; 

	for (int n = 0; n < 101; ++n) {
		if (set[n] == 1 || r.set[n] == 1) {
			temp.set[n] = 1;
		}
	}

	return temp;
}

IntegerSet IntegerSet::intersectionOfIntegerSets(const IntegerSet& r) {
	IntegerSet temp;

	for (int w = 0; w < 101; ++w) {
		if (set[w] == 1 && r.set[w] == 1) {
			temp.set[w] = 1;
		}
	}
	return temp;
}

void IntegerSet::insertElement(int k) {
	if (valid(k)) {
		set[k] = 1;
	}
	else {
		cerr << "Invalid insert attempted!\n";
	}
}

void IntegerSet::deleteElement(int m) {
	if (valid(m)) {
		set[m] = 0;
	}
	else {
		cerr << "Invalid delete attempted!\n";
	}
}

bool IntegerSet::isEqualTo(const IntegerSet& r) const {
	for (int v = 0; v < 101; ++v) {
		if (set[v] != r.set[v]) {
			return false;
		}
	}
	return true;
}