//#include <iostream>
//#include<vector>
//#include <memory>
//using namespace std;
//
//int main() {
//
//	char phrase[] = "american murder story";
//
//
//	return 0;
//}
//
//
//
//
//
//
//
















//POINTERS AND ARRAYS
//int luckyNumbers[5];
//cout << luckyNumbers << endl;
//cout << &luckyNumbers[0] << endl;
//cout << luckyNumbers[2] << endl;
//cout << *(luckyNumbers + 2) << endl;

//for (int i = 0; i <= 4; i++) {
//	cout << "Number: ";
//	cin >> luckyNumbers[i];
//}

//for (int i = 0; i <= 4; i++) {
//	cout << *(luckyNumbers + i);
//}

//====================================================================================

//RETURN MULTIPLE VALUES 1 FUNCTION USING POINTERS
//int getMin(int numbers[], int size) {
	//	int min = numbers[0];
	//	for (int i = 1; i < size; i++) {
	//		if (numbers[i] < min) {
	//			min = numbers[i];
	//		}
	//	}
	//	return min;
	//}
	//
	//int getMax(int numbers[], int size) {
	//	int max = numbers[0];
	//	for (int i = 1; i < size; i++) {
	//		if (numbers[i] > max) {
	//			max = numbers[i];
	//		}
	//	}
	//	return max;
	//}
	//
	//void getMinAndMax(int numbers[], int size, int* min, int* max) {
	//	for (int i = 1; i < size; i++) {
	//		if (numbers[i] > *max) {
	//			*max = numbers[i];
	//		}
	//		else if (numbers[i] < *min) {
	//				*min = numbers[i];
	//
	//		}
	//	}
	//}
	//
	//int main() {
	//
	//	int numbers[5] = { 5,4,-2,29,6 };
	//
	//	cout << "Minimum is " << getMin(numbers, 5) << endl; 
	//	cout << "Maximum is " << getMax(numbers, 5) << endl;
	//
	//	int min = numbers[0];
	//	int max = numbers[0];
	//
	//	getMinAndMax(numbers, 5, &min, &max);
	//	cout << "Min is " << min << endl;
	//	cout << "Max is " << max << endl;
	//
	//
	//
	//	system("pause>0");
	//	return 0;
	//}
	//
	//

//====================================================================================


// DYNAMIC ARRAYS
	//int size;
	//cout << "Size: ";
	//cin >> size;

	//int* myArray = new int[size];

	//for (int i = 0; i < size; i++) {
	//	cout << "Array[" << i << "] ";
	//	cin >> myArray[i];
	//}

	//for (int i = 0; i < size; i++) {
	//	cout << myArray[i] << " ";
	//	cout << *(myArray + i) << " ";
	//}

	//delete[]myArray;
	//myArray = NULL;


	//system("pause>0");
	//return 0;

//====================================================================================

//POINTERS AND 2 DIMENSIONAL ARRAYS
	//int rows, cols;
	//cout << "Enter rows, cols:";
	//cin >> rows >> cols;

	//int** table = new int* [rows];
	//for (int i = 0; i < rows; i++) {
	//	table[i] = new int[cols];
	//}

	//table[1][2] = 88;

	//for (int i = 0; i < rows; i++) {
	//	delete[] table[i];
	//}
	//delete[] table;
	//table = NULL;


//====================================================================================


//FUNCTION POINTERS AS ARGUEMENTS

//bool ascendingCompare(int a, int b) {
//	return a < b;
//}
//bool descendingCompare(int a, int b) {
//	return a > b;
//}
//
////void sortAscending(vector<int>& numbersVector)
////{
////	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
////	{
////		int bestIndex = startIndex;
////
////		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
////		{
////			// We are doing comparison here
////			if (ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
////				bestIndex = currentIndex;
////		}
////
////		swap(numbersVector[startIndex], numbersVector[bestIndex]);
////	}
////}
////void sortDescending(vector<int>& numbersVector)
////{
////	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
////	{
////		int bestIndex = startIndex;
////
////		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
////		{
////			// We are doing comparison here
////			if (descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
////				bestIndex = currentIndex;
////		}
////
////		swap(numbersVector[startIndex], numbersVector[bestIndex]);
////	}
////}
//
//
//void customSort(vector<int>& numbersVector, bool(*compareFunctionPtr)(int, int))
//{
//	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
//	{
//		int bestIndex = startIndex;
//
//		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
//		{
//			// We are doing comparison here
//			if (compareFunctionPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
//				bestIndex = currentIndex;
//		}
//
//		swap(numbersVector[startIndex], numbersVector[bestIndex]);
//	}
//}
//
//
//void printNumbers(vector<int>& numbersVector) {
//	for (int i = 0; i < numbersVector.size(); ++i)
//		cout << numbersVector[i] << ' ';
//}
//
//int main()
//{
//	vector<int> numbersVector = { 4,2,1,3,6,5 };
//	//sortAscending(numbersVector);
//	//sortDescending(numbersVector);
//
//	bool (*funcPtr)(int, int) = descendingCompare;
//	customSort(numbersVector, funcPtr);
//	printNumbers(numbersVector);
//
//	system("pause>0");
//}
