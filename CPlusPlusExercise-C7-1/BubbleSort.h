#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class BubbleSort {
public:

	BubbleSort(int, int);

	void sortArray();

	int getRandomNumber(int, int);
	void getUnSortedArray();
	void getSortedArray();

	void displayArrays();

private:
	static const int arraySize = 10;
	int unsortedArray[arraySize];
	int sortedArray[arraySize];

};