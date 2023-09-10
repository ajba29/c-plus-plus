#include "Gradebook.h"

int main() {

	int scores[] = { 78,85,65,98,78,59,98,56,57,85 };

	Gradebook gradebook(scores);

	gradebook.processGrades();

	return 0;
}