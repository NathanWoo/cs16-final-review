// This file is create to help F19, CS16 student understand concepts in pionters and related topics

#include <iostream>
using namespace std;

void swapByValue(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

void swapByReference(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void swapByAddress(int* &a, int* &b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	// passing by value, passing by reference and passing by address
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;
	int five = 5;
	int six = 6;

	cout << "Before swapping, one = " << one << " two = " << two << endl;
	swapByValue(one,two);
	cout << "After swapping by value, one = " << one << " two = " << two << endl;

	cout << "Before swapping, three = " << three << " four = " << four << endl;
	swapByReference(three,four);
	cout << "After swapping by reference, three = " << three << " four = " << four << endl;

	cout << "Before swapping, five = " << five << " six = " << six << endl;
	swapByAddress(&five,&six);
	cout << "After swapping by address, five = " << five << " six = " << six << endl;

	return 0;
}