#include "Prime.h"

int main() {
	int n=0;


	Prime number;

	//cout << number.isPrimeNumber(51);
	
	for (int i = 1; i < 1000; i++)
	{
		if (number.isPrimeNumber(i) == true) {
			number.modifyArrayPrimeNumbers(n,i);
			n++;
		}

	}

	for (int i = 0; i < 168; i++)
	{
		if (i % 5 == 0) {
			cout << endl;
		}
		cout << number.getPrimeNumber(i) << ' ';

	}


}
