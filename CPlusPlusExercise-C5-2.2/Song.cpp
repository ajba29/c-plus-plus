#include "song.h"

void Song::lyrics() {
	for (int num = 1; num < 12; num++)
	{
		string output = "On the ";
		switch (num)
		{
		case 1: 
			output = output + "first ";
			break;
		case 2: 
			output = output + "second ";
			break;
		case 3: 
			output = output + "third ";
			break;
		case 4: 
			output = output + "fourth ";
			break;
		case 5: 
			output = output + "fifth ";
			break;
		case 6: 
			output = output + "sixth ";
			break;
		case 7: 
			output = output + "seventh ";
			break;
		case 8: 
			output = output + "eighth ";
			break;
		case 9: 
			output = output + "ninth ";
			break;
		case 10: 
			output = output + "tenth ";
			break;
		case 11: 
			output = output + "eleventh ";
			break;
		case 12: 
			output = output + "twelfth ";
			break;
		}
		output = output + "day of Christmas my true love sent to me:";
		cout << output << endl;
		switch (num)
		{
		case 12:
			cout << "12 Drummers Drumming\n";
		case 11:
			cout << "Eleven Pipers Piping\n";
		case 10:
			cout << "Ten Lords a Leaping\n";
		case 9:
			cout << "Nine Ladies Dancing\n";
		case 8:
			cout << "Eight Maids a Milking\n";
		case 7:
			cout << "Seven Swans a Swimming\n";
		case 6:
			cout << "Six Geese a Laying\n";
		case 5:
			cout << "Five Golden Rings\n";
		case 4:
			cout << "Four Calling Birds\n";
		case 3:
			cout << "Three French Hens\n";
		case 2:
			cout << "Two Turtle Doves\nand a ";
		case 1:
			cout << "A Partridge in a Pear Tree\n\n";

		}
	}
}
