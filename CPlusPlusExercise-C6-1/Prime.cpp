#include "Prime.h"

bool Prime::isPrimeNumber(int primeNum) {
	int numCheck = (primeNum /2);
	if (primeNum == 1) {
		return false;
	}

	for (int i = 2; i <= numCheck; i++){
		if (primeNum % i == 0) {
			return false;
			break;

		}
	}
		return true;
		
}


void Prime::modifyArrayPrimeNumbers(int pos, int element) {
	arrayPrimeNumbers[pos] = element;
}

int Prime::getPrimeNumber(int x) {
	return arrayPrimeNumbers[x];
}
