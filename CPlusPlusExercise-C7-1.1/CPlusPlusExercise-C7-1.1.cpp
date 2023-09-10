#include "BubbleSort.h"

int main() {

	BubbleSort sort;

	for (int i = 0; i < 10; i++)
	{
		sort.modifyArrayBubble( sort.getArray(), i, sort.getRandomNumber());
	}
	
	sort.displayArrayNumbers(sort.getArray());

	sort.sortArrayBubble(sort.getArray());

	sort.displayArrayNumbers(sort.getArray());

	return 0;
}