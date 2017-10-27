//Implementation of IntStack.h

#include <iostream>
#include "IntStack.h"
using namespace std;

//Constructor creates new array of
IntStack::IntStack(int size) {
	stackArray = new int[size];
	stackSize = size;
	top = -1;
}

//Function is responsible for adding integer to stack
//Num is value of integer to add
void IntStack::push(int num) {
	
	//Check to see there is room on stack to add
	if (isFull()) {
		cout << "Stack is full!";
	}
	else {
		top++;
		stackArray[top] = num;
	}
}

//Function is responsible for removing number off stack
//Num is reference to number that is wish
void IntStack::pop(int &num) {

	//Check to see if there is anything on stack to pop off
	if (isEmpty()) {
		cout << "Can't pop! Stack is empty.";
	}
	else {
		num = stackArray[top];
		top--;
	}
}

//Function is responsible for checking to see if stack is full
//Returns a boolean value indicating if full
bool IntStack::isFull() {
	bool status;

	if (top == stackSize - 1)
		status = true;
	else
		status = false;

	return status;
}

//Function is responsible for checking to see if stack is empty
//Returns a boolean value indicating if empty
bool IntStack::isEmpty() {
	bool status;
	if (top == -1)
		status = true;
	else
		status = false;

	return status;
}

