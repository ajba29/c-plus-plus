#include "CRectangle.h"


int main() {


	CRectangle rect, rectb;

	rect.set_values(2, 3);

	rectb = duplicate(rect);

	cout << rectb.area();

	return 0;

}