#include "BubbleSort.h"

BubbleSort::BubbleSort(int start, int range) {

	for (int i = 0; i < arraySize; i++) {
		int randomNum = getRandomNumber(start,range);
		unsortedArray[i] = randomNum;
		sortedArray[i] = randomNum;
	}
}

int BubbleSort::getRandomNumber(int start, int range) {
	return start + rand() % range;
}

void BubbleSort::sortArray() {

	int temp;

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (sortedArray[j] < sortedArray[i]) {
				temp = sortedArray[i];
				sortedArray[i] = sortedArray[j];
				sortedArray[j] = temp;
			}
		}
	}
}

void BubbleSort::getUnSortedArray() {
	for (int i = 0; i < arraySize; i++) {
		cout << unsortedArray[i] << endl;
	}
}

void BubbleSort::getSortedArray() {
	for (int i = 0; i < arraySize; i++) {
		cout << sortedArray[i] << endl;
	}
}

void BubbleSort::displayArrays() {
	sortArray();
	cout << "Unsorted Array" << setw(17) 
		<< "Sorted Array" << endl;
	for (int i = 0; i < arraySize; i++) {
		cout << setw(7) << unsortedArray[i] <<
			 setw(18) << sortedArray[i] << endl;
	}


}