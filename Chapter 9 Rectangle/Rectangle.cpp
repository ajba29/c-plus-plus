#include "Rectangle.h"

Rectangle::Rectangle() {

	length = 1;
	width = 1;

}

void Rectangle::setLength(float length) {
	if (length >= 0.0 || length <= 20.0) {
		this->length = length;
	}
	else {
		this->length = 1;
	}
}

void Rectangle::setWidth(float width) {
	if (width >= 0.0 || width <= 20.0) {
		this->width = width;
	}
	else {
		this->width = 1;
	}
}

float Rectangle::getLength() {
	return length;
}

float Rectangle::getWidth() {
	return width;
}

float Rectangle::getPerimeter() {
	calculatePerimeter();
	return perimeter;
}

float Rectangle::getArea() {
	calculateArea();
	return area;
}

void Rectangle::calculatePerimeter() {
	perimeter = getLength() + getWidth();
	perimeter = perimeter * 2;
}
void Rectangle::calculateArea() {

	area = getLength() * getWidth();

}
