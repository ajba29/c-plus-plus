#include "IntegerSet.h"

//constructor to initialize '0' values
IntegerSet::IntegerSet() {
	for (int i = 0; i < 100; i++) {
		arr[i] = false;
	}
}

//set values of a set to '1'
void IntegerSet::setValues(int val[], int size) {
	for (int i = 0; i < size; i++) {
		arr[val[i]] = true;
	}
}

//union between sets
IntegerSet IntegerSet::unionOfSets(IntegerSet set){

	IntegerSet u;

	for (int i = 0; i < 100; i++) {
		u.arr[i] = arr[i] || set.arr[i];
	}

	return u;
}

//intersection between sets
IntegerSet IntegerSet::intersectionOfSets(IntegerSet set)
{
	IntegerSet u;
	for (int i = 0; i < 100; i++) {
		u.arr[i] = arr[i] && set.arr[i];
	}
	return u;
}

//insert element
void IntegerSet::insertElement(int k){
	arr[k] = true;
}

//delete element
void IntegerSet::deleteElement(int m){
	arr[m] = false;
}

//for printing out sets
void IntegerSet::printSet() const{
	for (int i = 0; i < 100; i++) {
		if (arr[i] == true) {
			cout << i << '\t';
		}
	}
}

// checking if set a = set b 
bool IntegerSet::isEqualTo(IntegerSet set){
	int c1=0;
	int c2=0;

	for (int i = 0; i < 100; i++) {
		if (arr[i] == true) {
			c1++;;
		}
	}
	for (int i = 0; i < 100; i++) {
		if (set.arr[i] == true) {
			c2++;;
		}
	}
	if (c1 != c2) {
		return false;
	}
	else {
		return true;
	}
}




