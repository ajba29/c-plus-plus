#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class BubbleSort {
	int arrayBubble[10];


public:
	
	int getRandomNumber();
	int * getArray();
	void modifyArrayBubble(int [],int, int);
	void displayArrayNumbers(int []);
	void sortArrayBubble(int[]);

};