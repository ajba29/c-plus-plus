#include "BubbleSort.h"

int BubbleSort::getRandomNumber() {
	int randomNumber = rand() % 100;
	return randomNumber;
}

int* BubbleSort::getArray() {
	return arrayBubble;
}

void BubbleSort::modifyArrayBubble(int array[], int position, int element) {
	array[position] = element;
}

void BubbleSort::displayArrayNumbers(int a[]) {
	for (int i = 0; i < 10; i++)
	{
	 cout << a[i] << ' ';
	}
	cout << endl;
}

void BubbleSort::sortArrayBubble(int array[]) {
	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (array[j] < array[i]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
