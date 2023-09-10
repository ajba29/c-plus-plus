#include "TicTacToe.h"

TicTacToe::TicTacToe() {
	// initialize new game
	setFloor();
	gameStatus = 0;
	isPlayer1 = true;
	counter = 1;
}

void TicTacToe::printFloor() {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << floor[i][j];
		}
		cout << endl;
	}
}

void TicTacToe::setFloor() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (j == 1 || j==3) {
				floor[i][j] = '|';
			}
			else if (i == 1 || i == 3) {
				floor[i][j] = '-';
			}
			else {
				floor[i][j] = ' ';
			}
		}
	}
}

void TicTacToe::promptPlayer() {
	cout << "What is your turn? ";
	cin >> playerChoice;
	cout << endl;
}

void TicTacToe::writeFloorPlayer1(int row, int col) {
	if (floor[row][col] == ' ') {
		floor[row][col] = 'X';
		counter++;
	}
	else if (floor[row][col] == 'O') {
		cout << "Invalid move.\n";
		counter = counter;

	}
}

void TicTacToe::writeFloorPlayer2(int row, int col) {
	if (floor[row][col] == ' ') {
		floor[row][col] = 'O';
		counter++;
	}
	else if (floor[row][col] == 'X') {
		cout << "Invalid move.\n";
		counter = counter;
	}
}

void TicTacToe::makeMove(int move) {

	switch (move){
	case 1:	
		checkPlayerNumber();
		if (isPlayer1) {
		writeFloorPlayer1(0, 0);
		}
		else {
		writeFloorPlayer2(0, 0);
		}
		break;

	case 2: 
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(0, 2);
		}
		else {
			writeFloorPlayer2(0, 2);
		}
		break;

	case 3:
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(0, 4);
		}
		else {
			writeFloorPlayer2(0, 4);
		}
		break;

	case 4: 
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(2, 0);
		}
		else {
			writeFloorPlayer2(2, 0);
		}
		break;
	case 5: 
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(2, 2);
		}
		else {
			writeFloorPlayer2(2, 2);
		}
		break;

	case 6: 
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(2, 4);
		}
		else {
			writeFloorPlayer2(2, 4);
		}
		break;

	case 7:
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(4, 0);
		}
		else {
			writeFloorPlayer2(4, 0);
		}
		break;

	case 8:
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(4, 2);
		}
		else {
			writeFloorPlayer2(4, 2);
		}
		break;
		
	case 9:
		checkPlayerNumber();
		if (isPlayer1) {
			writeFloorPlayer1(4, 4);
		}
		else {
			writeFloorPlayer2(4, 4);
		}
		break;

	default:
		break;
	}
}

void TicTacToe::checkPlayerNumber() {
	if (counter == 1 || counter == 3 ||
		counter == 5 || counter == 7 ||
		counter == 9) {
		isPlayer1 = true;
	}
	else if(counter == 2 || counter == 4 ||
		counter == 6 || counter == 8) {
		isPlayer1 = false;
	}
}

void TicTacToe::checkGameStatus() {
	if (
		//vertical win player 1
		(floor[0][0] == 'X' && floor[2][0] == 'X' && floor[4][0] == 'X') ||
		(floor[0][2] == 'X' && floor[2][2] == 'X' && floor[4][2] == 'X') ||
		(floor[0][4] == 'X' && floor[2][4] == 'X' && floor[4][4] == 'X') ||
		//horizontal win player 1
		(floor[0][0] == 'X' && floor[0][2] == 'X' && floor[0][4] == 'X') ||
		(floor[2][0] == 'X' && floor[2][2] == 'X' && floor[2][4] == 'X') ||
		(floor[4][0] == 'X' && floor[4][2] == 'X' && floor[4][4] == 'X') ||
		//diagonal win player 1
		(floor[0][0] == 'X' && floor[2][2] == 'X' && floor[4][4] == 'X') ||
		(floor[4][0] == 'X' && floor[2][2] == 'X' && floor[0][4] == 'X')
		) {
		gameStatus = 1; //p1 wins
	}
	else if (
		//vertical win player 2
		(floor[0][0] == 'O' && floor[2][0] == 'O' && floor[4][0] == 'O') ||
		(floor[0][2] == 'O' && floor[2][2] == 'O' && floor[4][2] == 'O') ||
		(floor[0][4] == 'O' && floor[2][4] == 'O' && floor[4][4] == 'O') ||
		//horizontal win player 2
		(floor[0][0] == 'O' && floor[0][2] == 'O' && floor[0][4] == 'O') ||
		(floor[2][0] == 'O' && floor[2][2] == 'O' && floor[2][4] == 'O') ||
		(floor[4][0] == 'O' && floor[4][2] == 'O' && floor[4][4] == 'O') ||
		//diagonal win player 2
		(floor[0][0] == 'O' && floor[2][2] == 'O' && floor[4][4] == 'O') ||
		(floor[4][0] == 'O' && floor[2][2] == 'O' && floor[0][4] == 'O')
		) {
		gameStatus = 2; //p2 wins
	}
	else if (counter == 10) {
		gameStatus = 3; //game over
	}
}

void TicTacToe::printGameStatus() {
	if (gameStatus == 1) {
		cout << "\nPLAYER 1 WINS THE GAME.\n";
		cout << "\nPLAYER 1 WINS THE GAME.\n";
		cout << "\nPLAYER 1 WINS THE GAME.\n";

	}
	else if (gameStatus == 2) {
		cout << "\nPLAYER 2 WINS THE GAME.\n";
		cout << "\nPLAYER 2 WINS THE GAME.\n";
		cout << "\nPLAYER 2 WINS THE GAME.\n";

	}
	else if (gameStatus == 3) {
		cout << "GAME OVER.\n";
	}
}

void TicTacToe::printHowToPlay() {
	cout << "TicTacToe is a 2-player game.\n";
	cout << "Each player take turns plotting an \"X\" or \"O\" mark.\n";
	cout << "If the player made 3 consecutive marks vertically, horizontally,\n";
	cout << "or diagonally, the player wins.\n\n";
	cout << "Here are the numbers designated for each block\n";
	
	cout << " 1 | 2 | 3\n";
	cout << " -   -   - \n";
	cout << " 4 | 5 | 6\n";
	cout << " -   -   - \n";
	cout << " 7 | 8 | 9\n\n";

}

void TicTacToe::printPlayerNumber() {
	checkPlayerNumber();
	if (isPlayer1) {
		cout << "\nPlayer 1's turn\n";
	}
	else if (!isPlayer1) {
		cout << "\nPlayer 2's turn\n";
	}
}

void TicTacToe::startGame() {

	while (gameStatus == 0) {

		printPlayerNumber();
		promptPlayer();
		makeMove(playerChoice);
		printFloor();
		checkGameStatus();
		


	}
	printGameStatus();
}