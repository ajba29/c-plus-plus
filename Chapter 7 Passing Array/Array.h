#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

class Array {
public:
	void modifyArray(int[], int);
	void modifyElement(int);


private:
	static const int arraySize = 5;
	int myArray[arraySize] = { 0,1,2,3,4 };

};