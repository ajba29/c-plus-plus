#include "Turtle.h"

Turtle::Turtle(int adirection, int posX, int posY, int penStatus) {
	direction = adirection;
	row = posX;
	column = posY;
	pen=penStatus;
}

//void Turtle::turtleMenu() {
//
//}

//bool isPenEnabled(int choice) {
//	if (choice == 1) {
//		return true;
//	}
//	else if (choice == 2) {
//		return false;
//	}
//}

//direction 1 north, 2 east, 3 south, 4 west

void Turtle::turnLeft() {
	direction = direction - 1;
	if (direction == 0)
	{
		direction = 4;
	}
}

void Turtle::turnRight() {
	direction = direction + 1;
	if (direction == 5) {
		direction = 1;
	}

}

void Turtle::penDown() {
	pen = 1;
	plane[column][row] = 1;
}

void Turtle::penUp() {
	pen = 0;

}

void Turtle::turtleMoveForward(int num) {
	
	switch (direction)
	{

	case 1:
		for (int i = 0; i <num ; i++){
			if (pen == 1) {
				penDown();
			}
			else if (pen ==0) {
				penUp();
			}
			column--;
		}
		break;
		
	case 2:
		for (int i = 0; i < num; i++){
			if (pen == 1) {
				penDown();
			}
			else if (pen == 0) {
				penUp();
			}
			row++;
		}
		break;

	case 3:
		for (int i = 0; i < num; i++){
			if (pen == 1) {
				penDown();
			}
			else if (pen == 0) {
				penUp();
			}
			column++;
		}
		break;

	case 4:
		for (int i = 0; i < num; i++){
			if (pen == 1) {
				penDown();
			}
			else if (pen == 0) {
				penUp();
			}
			row--;
		}
		break;
	}
}

//int Turtle::getTurtlePositionX() {
//	return x;
//}
//
//int Turtle::getTurtlePositionY() {
//	return y;
//}
//
//int Turtle::getTurtleDirection() {
//	return direction;
//}

void Turtle::displayArrayMessage() {
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			if (plane[i][j] == 1) {
				cout << " #";
			}
			else if (plane[i][j] == 0) {
				cout << "  ";
			}
			
		}
		cout << endl;
	}
}

void Turtle::displayTurtlePosition() {
	cout << "Turtle position " <<  row << "," << column << " ";
}

void Turtle::displayTurtleDirection() {
	switch (direction)
	{
	case 1: 
		cout << "Turtle is facing north.";
		break;
	case 2: 
		cout << "Turtle is facing east.";
		break;
	case 3:
		cout << "Turtle is facing south.";
		break;
	case 4:
		cout << "Turtle is facing west.";
		break;

	}
}

