#include "GreatedTask.h"

// Constructor for the GreatedTask class
GreatedTask::GreatedTask(string task) : Text(task){}

// Override of the Print function for the GreatedTask class
void GreatedTask::Print()
{
	cout << "!!! " << task << endl;
}
