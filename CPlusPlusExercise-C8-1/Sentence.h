#include <iostream>
#include <cstdlib>

using namespace std;

class Sentence {
public:

	void setStory();
	void displayStory();

private:
	
	int numSentence;

	const char* article[5] = { "the","a","one","some","any" };
	const char* noun[5] = { "boy","dog","girl","town","car" };
	const char* verb[5] = { "drove","jumped","ran","walked","skipped" };
	const char* preposition[5] = { "to","from","over","under","on" };
	const char* sentence[6] = { "article","noun","verb","preposition","article","noun" };
	const char* story[25][6];

	int getRandomNumber(int, int);
	void setSentence();

};