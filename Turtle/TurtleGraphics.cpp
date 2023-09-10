#include "TurtleGraphics.h"	

int distance;

TurtleGraphics::TurtleGraphics()
{
	direction = 0;
	xPos = 0;
	yPos = 0;
	for (int j = 0; j < 20; j++)
	{
		// loop for columns of current row   
		for (int k = 0; k < 20; k++)
			floor[j][k] = 0;
	}

	penDown = false;
}

void TurtleGraphics::penUp()
{
	penDown = false;

}

void TurtleGraphics::penDowns()
{
	penDown = true;

}

void TurtleGraphics::turnRight()
{
	direction++;

}

void TurtleGraphics::turnLeft()
{

	direction--;
}

void TurtleGraphics::movePen(int distance)
{
	int i = distance;

	if (penDown == true)
		floor[xPos][yPos] = 1;

	for (i; i >= 0; i--)
	{
		if (direction == 0)
		{
			xPos++;
			if (penDown == true)
				floor[xPos][yPos] = 1;
		}


		if (direction == 1)
		{
			yPos++;
			if (penDown == true)
				floor[xPos][yPos] = 1;
		}

		if (direction == 2)
		{
			xPos--;
			if (penDown == true)
				floor[xPos][yPos] = 1;
		}

		if (direction == 3)
		{
			yPos--;
			if (penDown == true)
				floor[xPos][yPos] = 1;
		}
	}


}

void TurtleGraphics::printGraphic()
{
	// loop for array's rows                
	for (int j = 0; j < 20; j++)
	{
		// loop for columns of current row   
		for (int k = 0; k < 20; k++)

			if (floor[j][k] == 1)
				cout << " * " << ' ';
			else
				cout << floor[j][k] << ' ';

		cout << endl;
	}

}