#include "Rectangle.h"

int main() {

	Rectangle rectangle;
	
	cout << "Default length is " << rectangle.getLength()
		<< " meter\n" << "Default width is "
		<< rectangle.getWidth() << " meter\n";
	cout << "Default perimeter is " << rectangle.getPerimeter()
		<< " meters" << "\n" << "Default area is " 
		<< rectangle.getArea() << " square meters \n\n";

	rectangle.setLength(18.5);
	rectangle.setWidth(5.5);

	cout << "Modded length is " << rectangle.getLength()
		<< " meter\n" << "Modded width is "
		<< rectangle.getWidth() << " meter\n";
	cout << "Modded perimeter is " << rectangle.getPerimeter()
		<< " meters" << "\n" << "Modded area is "
		<< rectangle.getArea() << " square meters \n";

}

