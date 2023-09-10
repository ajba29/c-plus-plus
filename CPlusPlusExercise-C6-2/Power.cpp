#include "Power.h"

int Power::getPower(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	return base * getPower(base, exponent - 1);
}