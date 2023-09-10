#include <iostream>
#include <iomanip>
using std::setw;
using std::cout;
using std::cin;
using std::endl; 
using std::cerr;
#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet {
public:

	IntegerSet() { emptySet(); }
	IntegerSet(int, int = -1, int = -1, int = -1, int = -1);
	IntegerSet unionOfIntegerSets(const IntegerSet&);
	IntegerSet intersectionOfIntegerSets(const IntegerSet&);

	void emptySet(void);
	void inputSet(void);
	void insertElement(int);
	void deleteElement(int);
	void setPrint(void) const;
	bool isEqualTo(const IntegerSet&) const;

private:
	int set[101];
	int valid(int x) const { return x >= 0 && x <= 100; }

};

#endif // !1

