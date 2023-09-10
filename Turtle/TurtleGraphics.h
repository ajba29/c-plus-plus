#include <iostream>
#include <string>  
using namespace std;


class TurtleGraphics
{
public:
	TurtleGraphics();
	void penUp();
	void penDowns();
	void turnRight();
	void turnLeft();
	void movePen(int);
	void printGraphic();

private:
	int xPos;
	int yPos;
	int floor[20][20];
	int direction;
	bool penDown;

};