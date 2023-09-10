#include <iostream>
using namespace std;

#ifndef CRECTANGLE_H
#define CRECTANGLE_H

class CRectangle {
public:

	void set_values(int, int);					// protorype for set values
	int area();									//prototype for area
	friend CRectangle duplicate(CRectangle&);	//prototype for duplicate friend function

private:

	int height;	
	int width;

};


#endif
