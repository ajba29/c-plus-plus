#include "CRectangle.h"

void CRectangle::set_values(int height, int width) {
	//set height and width values
	this->height = height;
	this->width = width;

}

int CRectangle::area() {
	//area formula
	int area;
	area = height * width;
	return area; //return area

}

CRectangle duplicate(CRectangle& rectangle) {
	//doubles height and width
	rectangle.height = rectangle.height * 2;
	rectangle.width = rectangle.width * 2;

	return rectangle;
}