#include "Gradebook.h"

Gradebook::Gradebook(int arrayGrades[]) {

	for (int i = 0; i < students; i++) {
		grades[i] = arrayGrades[i];
	}
}

int Gradebook::getAverage() {
	int total = 0;
	int average;
	for (int i = 0; i < students; i++) {
		total = total + grades[i];
	}
	average = total / students;

	return average;
}

int Gradebook::getMinimum() {
	int minimum = 100;
	for (int grade = 0; grade < students; grade++) {
		if (grades[grade] < minimum) {
			minimum = grades[grade];
		}
	}
	return minimum;
}

int Gradebook::getMaximum() {
	int maximum = 0;
	for (int grade = 0; grade < students; grade++) {
		if (grades[grade] > maximum) {
			maximum = grades[grade];
		}
	}
	return maximum;
}

void Gradebook::outputGrades() {
	cout << "Student no." << setw(16) << "Student grade" << endl;
	for (int i = 0; i < students; i++) {
		cout << setw(7) << i+1 << setw(16) << grades[i] << endl;
	}
}

void Gradebook::outputBarList() {
	const int frequencySize = 11;
	int frequency[frequencySize] = { 0 };

	for (int i = 0; i < students; i++) {
		frequency[grades[i]/10]++;
	}

	for (int j = 0; j < frequencySize; j++) {
		if (j == 0) {
			cout << "  0-9:";
		}
		else if (j == 10) {
			cout << "  100:";
		}
		else {
			cout << j * 10 << "-" << (j * 10) + 9 << ":";
		}

		for (int k = 0; k < frequency[j]; k++) {
			cout << '*';
		}
		cout << endl;
	}
}

void Gradebook::processGrades(){
	outputGrades();
	cout << endl;
	cout << "Minimum score is " << getMinimum() << endl;
	cout << "Average score is " << getAverage() << endl;
	cout << "Maximum score is " << getMaximum() << endl;
	cout << endl;
	outputBarList();

}