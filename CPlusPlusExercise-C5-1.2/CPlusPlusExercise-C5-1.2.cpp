#include "Employee.h"

int main()
{
	int code;
	bool isTrue = true;

	Employee manager;
	manager.setWage(1000); //1000 fixed
	Employee hourlyWorker;
	hourlyWorker.setWage(10); //10 per hour
	Employee commisioner;
	commisioner.setWage(250); //250 fixed
	Employee pieceWorker;
	pieceWorker.setWage(5); //5 per piece

	while (isTrue)
	{
		cout << "Enter employee code (1-4). Press 5 to exit:";
		cin >> code;

		switch (code)
		{
		case 1:
			cout << "The manager's weekly salary is: "
				<< manager.getWage() << endl;
			break;

		case 2:
			int hours;
			cout << "How many hours did the hourly worker worked? ";
			cin >> hours;
			cout << hourlyWorker.getHourlyWorkerWage(hours) << endl;
			break;

		case 3:
			int grossWeekly;
			cout << "What is the gross weekly sales?";
			cin >> grossWeekly;
			cout << "The commissioner's weekly salary is:"
			<< commisioner.getCommisionerWage(grossWeekly) << endl;
			break;

		case 4:
			int pieces;
			cout << "How many pieces were made? ";
			cin >> pieces;
			cout << "The piece worker's salary is "
				<< pieceWorker.getPieceWorkerWage(pieces) << endl;
			break;

		case 5:
			isTrue = false;
			break;

		}
	}



	return 0;
}