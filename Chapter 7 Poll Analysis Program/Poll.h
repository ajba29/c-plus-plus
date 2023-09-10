#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

class Poll {
public:

	void analyze();
	void displayPoll();

private:

	static const int responseSize = 40;
	static const int frequencySize = 11;

	int responses[ responseSize ] = 
	{ 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 
	8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
    5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

	int frequency[frequencySize] = { 0 };


};