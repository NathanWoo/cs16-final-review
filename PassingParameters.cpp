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

void swapByAddress(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// This code is from https://stackoverflow.com/a/5789842/9706459 
void pass_by_value(int* p) { 
    //Allocate memory for int and store the address in p 
    p = new int; 
} 

// This code is from https://stackoverflow.com/a/5789842/9706459 
void pass_by_reference(int*& p) { 
     p = new int; 
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


	int* p1 = NULL;
    int* p2 = NULL;
	cout << "Before passing in pass_by_value, p1 = " << p1 << endl;
	cout << "Before passing in pass_by_reference, p2 = " << p2 << endl;
	pass_by_value(p1); //p1 will still be NULL after this call 
    pass_by_reference(p2); //p2 's value is changed to point to the newly allocate memory 
	cout << "After passing in pass_by_value, p1 = " << p1 << endl;
	cout << "After passing in pass_by_reference, p2 = " << p2 << endl;

	return 0;
}