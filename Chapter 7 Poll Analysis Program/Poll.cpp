#include "Poll.h"

void Poll::analyze() {

	for (int answer = 0; answer < responseSize; answer++) {
		frequency[responses[answer]]++;
	}

}

void Poll::displayPoll() {

	cout << "Rating" << setw(17) << "Frequency" << endl;
	for (int rating = 1; rating < frequencySize; rating++) {
		cout << setw(6) << rating << setw(17) << frequency[rating]
			<< endl;
	}
}