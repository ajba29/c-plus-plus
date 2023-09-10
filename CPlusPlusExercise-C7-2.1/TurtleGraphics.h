#include <iostream>

using namespace std;

class TurtleGraphics {
public:

	TurtleGraphics(int, int, int, int);

	void penUp();
	void penDown();
	void turnLeft();
	void turnRight();
	void moveForward(int);

	void displayTurtlePosition();
	void displayTurtleDirection();
	void displayFloorArray();

	void processFGraphics();
	void processPGraphics();
	void processTGraphics();
	void processFptGraphics();

	void turtleMenu();
private:

	int pen;
	int direction;
	int posY;
	int posX;
	int floor[20][20] = { 0 };



};