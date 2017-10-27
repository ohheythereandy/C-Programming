#pragma once
//Specfication file for the IntStack class

#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack {
private:
	//declare pointer to stack array, stack size, and top of stack
	int *stackArray;
	int stackSize;
	int top;

public:
	//Constructor
	IntStack(int);

	//Stack Operations
	void push(int);
	void pop(int &);
	bool isFull();
	bool isEmpty();

};