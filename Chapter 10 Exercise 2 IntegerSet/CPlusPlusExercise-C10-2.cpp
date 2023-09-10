#include "IntegerSet.h"

int main() {

	IntegerSet a, b, c, d, e(8, 5, 7);
	cout << "Enter set A: \n";
	a.inputSet();
	cout << "\nEnter set B:\n";
	b.inputSet();
	c = a.unionOfIntegerSets(b);
	d = a.intersectionOfIntegerSets(b);

	cout << "\nUnion of A and B is : \n";
	c.setPrint();

	cout << "\nIntersection of A and B is : \n";
	d.setPrint();


	return 0;
}