#include <iostream>
using namespace std;

class Rectangle {
public:

	Rectangle();
	
	void setWidth(float);
	void setLength(float);

	float getWidth();
	float getLength();
	float getPerimeter();
	float getArea();

	void calculatePerimeter();
	void calculateArea();

private:

	float length;
	float width;
	float area;
	float perimeter;

};

