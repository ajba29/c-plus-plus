#include "Turtle.h"



int main() {
	int command;
	bool isNotEnd = true;

	Turtle Turtle(2, 0, 0, 0); //initialize direction 2 facing east at 0,0 array position
	
	while (isNotEnd) {
		cout << "Enter command: ";
		cin >> command;

		switch (command){
		case 1:
			Turtle.penUp();
			Turtle.displayTurtlePosition();
			Turtle.displayTurtleDirection();
			cout << endl;
			break;

		case 2:
			Turtle.penDown();
			Turtle.displayTurtlePosition();
			Turtle.displayTurtleDirection();
			cout << endl;
			break;

		case 3:
			Turtle.turnRight();
			Turtle.displayTurtlePosition();
			Turtle.displayTurtleDirection();
			cout << endl;
			break;

		case 4:
			Turtle.turnLeft();
			Turtle.displayTurtlePosition();
			Turtle.displayTurtleDirection();
			cout << endl;
			break;

		case 5:
			Turtle.turtleMoveForward(5);
			Turtle.displayTurtlePosition();
			Turtle.displayTurtleDirection();
			cout << endl;
			break;

		case 6:
			Turtle.displayArrayMessage();
			break;

		case 10:
			Turtle.turtleMoveForward(10);
			Turtle.displayTurtlePosition();
			Turtle.displayTurtleDirection();
			cout << endl;
			break;
		case 11:
			Turtle.turtleMoveForward(1);
			Turtle.displayTurtlePosition();
			Turtle.displayTurtleDirection();
			cout << endl;
			break;

		case 9:
			isNotEnd = false;
			break;
		}
	}

}
// displaying fpt graphics

