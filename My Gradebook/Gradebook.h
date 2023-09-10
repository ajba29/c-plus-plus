#include <iostream>
#include <iomanip>
using namespace std;

class Gradebook {
public:

	Gradebook(int[]);

	int getAverage();
	int getMinimum();
	int getMaximum();
	void outputGrades();
	void outputBarList();
	void processGrades();

private:

	static const int students = 10;
	int grades[students];

};