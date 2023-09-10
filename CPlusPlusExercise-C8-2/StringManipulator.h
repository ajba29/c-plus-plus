#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
public:


	void copy(char(*), char(*), int num);
	void append(char(*), char(*), int num);
	int compareArrays(char(*), char(*), int num);
	int getStringLength(char(*));

private:

	void clearArray(char(*));



};