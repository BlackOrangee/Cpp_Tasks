#pragma once
#include <iostream>
using namespace std;

class Text
{
protected:
	// A protected member variable to store the task
	string task;
public:
	// Constructor to initialize the task
	Text(string);

	// Virtual function to print the task
	virtual void Print();
};

