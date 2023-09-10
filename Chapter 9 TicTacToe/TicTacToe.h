#include <iostream>
#include <stdlib.h>
using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H
class TicTacToe {
public:
	TicTacToe();

	void printFloor();
	void setFloor();
	void promptPlayer();
	void writeFloorPlayer1(int, int);
	void writeFloorPlayer2(int ,int);
	void makeMove(int);
	void printHowToPlay();
	void checkPlayerNumber();
	void checkGameStatus();
	void printGameStatus();
	void printPlayerNumber();
	void startGame();



private:

	int gameStatus;
	bool isPlayer1;
	
	int playerChoice;
	static const int row = 5;
	static const int column = 5;
	char floor[row][column]{};
	int counter;
};
#endif
