#include "TurtleGraphics.h"

int commands[99][2];

int main()
{
	void getCommands(int commands[99][2]);



	TurtleGraphics t;

	int commands[99][2];
	getCommands(commands);
	int i = 0;
	int value;

	while (i < 99)
	{
		value = commands[i][0];
		switch (value)
		{
		case 1: t.penUp();
		case 2: t.penDowns();
		case 3: t.turnRight();
		case 4: t.turnLeft();
		case 5: t.movePen(commands[i][1]);
		}
	}

	t.printGraphic();

	return 0;
}


void getCommands(int commands[99][2])
{
	
	int tempCommand;
	int MAXCOMMANDS = 99;

	cout << "Enter command (9 to end input): ";
	cin >> tempCommand;

	for (int i = 0; tempCommand != 9 && i < MAXCOMMANDS; ++i) {
		commands[i][0] = tempCommand;

		if (tempCommand == 5) {
			cin.ignore();   // skip comma
			cin >> commands[i][1];
		}

		cout << "Enter command (9 to end input): ";
		cin >> tempCommand;
	}

	commands[i][0] = 9;  // last command
}