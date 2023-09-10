#include "Sentence.h"

int Sentence::getRandomNumber(int start,int max) {
	return start + rand() % max;
}

void Sentence::setSentence() {
	// article - noun - verb - preposition - article - noun
	int randomNumber;
	char dot = '.';

	randomNumber = getRandomNumber(0,5);
	switch (randomNumber)
	{
	case 0: 
		sentence[0] = "The";
		break;
	case 1:
		sentence[0] = "A";
		break;
	case 2:
		sentence[0] = "One";
		break;
	case 3: 
		sentence[0] = "Some";
		break;
	case 4:
		sentence[0] = "Any";
		break;

	default:
		break;
	}

	randomNumber = getRandomNumber(0, 5);
	sentence[1] = noun[randomNumber];

	randomNumber = getRandomNumber(0, 5);
	sentence[2] = verb[randomNumber];

	randomNumber = getRandomNumber(0, 5);
	sentence[3] = preposition[randomNumber];

	randomNumber = getRandomNumber(0, 5);
	sentence[4] = article[randomNumber];

	randomNumber = getRandomNumber(0, 5);
	sentence[5] = noun[randomNumber];

}



void Sentence::setStory() {

	int numParagraph;
	numParagraph = getRandomNumber(3, 3);
	numSentence = numParagraph * 5;
	for (int row = 0; row < numSentence;row++) {
		setSentence();
		for (int column = 0; column < 6;column++) {
			story[row][column] = sentence[column];
		}
	}

}

void Sentence::displayStory() {

	for (int row = 0; row < numSentence;row++) {
		if (row == 5 || row == 10 || row == 15
			|| row == 20 || row == 25) {
			cout << endl;
		}
		for (int column = 0; column < 6;column++) {
			
			if (column == 5) {
				cout << story[row][column] << ". ";
			}
			else {
				cout << story[row][column] << ' ';
			}
		}
	}

}
