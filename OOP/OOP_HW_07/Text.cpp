#include "Text.h"

// Constructor to initialize the task of the Text class
Text::Text(string task)
{
	this->task = task;
}

// Function to print the task of the Text class
void Text::Print()
{
	cout << task << endl;
}
