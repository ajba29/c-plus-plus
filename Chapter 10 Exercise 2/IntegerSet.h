#include<iostream>
#include<stdlib.h>
using std::srand;
using std::rand;
using std::cout;
using std::endl;

#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet {
public:

	IntegerSet();
	void setValues(int val[], int size);
	IntegerSet unionOfSets(IntegerSet);
	IntegerSet intersectionOfSets(IntegerSet);
	void insertElement(int);
	void deleteElement(int);
	void printSet() const;
	bool isEqualTo(IntegerSet);

private:

	bool arr[100];

};

#endif // !1