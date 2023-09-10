#include "TurtleGraphics.h"

TurtleGraphics::TurtleGraphics(int aPen, int aDirection,
	int aPosX, int aPosY) {
	pen = aPen;
	direction = aDirection;
	posX = aPosX;
	posY = aPosY;
}

void TurtleGraphics::penUp() {
	 pen = 1;
	 direction = 2;
	 posX = 0;
	 posY = 0;
}

void TurtleGraphics::penDown() {
	pen = 2;
	floor[posY][posX] = 1;
}

// 1=north 2=east 3=south 4=west
void TurtleGraphics::turnLeft() {
	direction = direction - 1;
	if (direction == 0) {
		direction == 4;
	}
}

void TurtleGraphics::turnRight() {
	direction = direction + 1;
	if (direction == 5) {
		direction == 1;
	}
}

// 1=north 2=east 3=south 4=west
// posY = row
// posX = column
void TurtleGraphics::moveForward(int numberOfSpaces) {
	switch (direction)
	{
	case 1:
		for (int steps = 0; steps < numberOfSpaces; steps++) {
			if (pen == 1) {
				posY--;
			}
			else if (pen == 2) {
				penDown();
				posY--;
			}
		}
		break;

	case 2:
		for (int steps = 0; steps < numberOfSpaces; steps++) {
			if (pen == 1) {
				posX++;
			}
			else if (pen == 2) {
				penDown();
				posX++;
			}
		}
		break;

	case 3:
		for (int steps = 0; steps < numberOfSpaces; steps++) {
			if (pen == 1) {
				posY++;
			}
			else if (pen == 2) {
				penDown();
				posY++;
			}
		}
		break;

	case 4:
		for (int steps = 0; steps < numberOfSpaces; steps++) {
			if (pen == 1) {
				posX--;
			}
			else if (pen == 2) {
				penDown();
				posX--;
			}
		}
		break;
	}
}

void TurtleGraphics::displayTurtlePosition() {

	cout << "Turtle position is " << posX << ',' 
		<< posY << endl;
}

void TurtleGraphics::displayTurtleDirection() {
	switch (direction) {
	case 1: 
		cout << "Turtle direction is north.\n";
		break;
	case 2:
		cout << "Turtle direction is east.\n";
		break;
	case 3: 
		cout << "Turtle direction is south.\n";
		break;
	case 4:
		cout << "Turtle direction is west.\n";
		break;
	}
	
}


void TurtleGraphics::displayFloorArray() {
	for (int r = 0; r < 20; r++) {
		for (int c = 0; c < 20; c++) {
			if (floor[r][c] == 0) {
				cout << "  ";
			}
			else if (floor[r][c] == 1) {
				cout << " #";
			}
		}
		cout << endl;
	}
}

void TurtleGraphics::processFGraphics() {
	//display F
	penUp();
	moveForward(1);
	turnRight();
	moveForward(1);
	penDown();
	moveForward(5);

	penUp();
	moveForward(1);
	turnRight();
	moveForward(1);
	turnLeft();
	penDown();
	moveForward(5);

	penUp();
	moveForward(1);
	turnRight();
	moveForward(3);
	turnLeft();
	penDown();
	moveForward(5);
	
}

void TurtleGraphics::processPGraphics() {
	//display P
	penUp();
	moveForward(7);  // |
	turnRight();     // |
	moveForward(7);  // |
	penDown();       // |
	moveForward(5);  // |

	penUp();
	moveForward(7); //------
	turnRight();    //     
	moveForward(7);  //    
	turnLeft();
	penDown();
	moveForward(5);

	penUp();
	moveForward(7); //------
	turnRight();    //     
	moveForward(9);  //    
	turnLeft();
	penDown();
	moveForward(5);

	penUp();
	moveForward(11); //------
	turnRight();    //     
	moveForward(8);  //    
	penDown();

}

void TurtleGraphics::processTGraphics() {
	//display T
	penUp();
	moveForward(13);
	turnRight();
	moveForward(13);
	turnLeft();
	penDown();
	moveForward(5);

	penUp();
	moveForward(15);
	turnRight();
	moveForward(13);
	penDown();
	moveForward(5);
}

void TurtleGraphics::processFptGraphics() {
	processFGraphics();
	processPGraphics();
	processTGraphics();

}

void TurtleGraphics::turtleMenu() {
	bool choice = true;
	int command;


	while (choice) {
		cout << "Enter command:";
		cin >> command;

		switch (command) {
		case 1: 
			penUp();
			displayTurtlePosition();
			displayTurtleDirection();
			break;
	
		case 2: 
			penDown();
			displayTurtlePosition();
			displayTurtleDirection();
			break;
	
		case 3: 
			turnRight();
			displayTurtlePosition();
			displayTurtleDirection();
			break;

		case 4: 
			turnLeft();
			displayTurtlePosition();
			displayTurtleDirection();
			break;
	
		case 5: 
			moveForward(5);
			displayTurtlePosition();
			displayTurtleDirection();
			break;

		case 6: 
			processFptGraphics();
			displayFloorArray();
			displayTurtlePosition();
			displayTurtleDirection();
			break;

		case 9: 
			choice = false;
			break;

		case 10: 
			moveForward(10);
			displayTurtlePosition();
			displayTurtleDirection();
			break;

		}
	}
	
}