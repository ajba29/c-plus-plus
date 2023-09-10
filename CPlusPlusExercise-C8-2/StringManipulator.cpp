#include "StringManipulator.h"


void StringManipulator::copy(char(*arrayPtr1), char(*arrayPtr2), int num) {

	for (int i = 0; i < num; i++) {
		*(arrayPtr1 + i)  = * (arrayPtr2 + i);
	}
}

void StringManipulator::append(char(*arrayPtr1), char(*arrayPtr2), int num) {
	int num1 = getStringLength(arrayPtr1); //len array 1
	int num2 = getStringLength(arrayPtr2); // len array 2

	for (int i = 0; i < num; i++) {
		*(arrayPtr1+num1) = arrayPtr2[i];
		num1++;
	}
	int end = num1 + num2;
}

int StringManipulator::compareArrays(char(*arrayPtr1), char(*arrayPtr2), int num){
	
	int num2 = getStringLength(arrayPtr2);

	if (num > num2) {
		return 1;
	}
	else if (num < num2) {
		return -1;
	}
	else if (num == num2) {
		return 0;
	}

}

int StringManipulator::getStringLength(char(*aArrayPtr)) {

	int total = 0;

	while (*aArrayPtr != '\0') {
		total = total + 1;
		aArrayPtr++;
	}
	return total;

}

//void StringManipulator