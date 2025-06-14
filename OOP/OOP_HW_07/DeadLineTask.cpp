#include "DeadLineTask.h"

// Constructor for the DeadLineTask class
DeadLineTask::DeadLineTask(string task, int day, int month) : Text(task)
{
    this->day = day;
    this->month = month;
}

// Overridden Print function for the DeadLineTask class
void DeadLineTask::Print()
{
    cout << "Date: " << day << "." << month << " " << task << endl;
}
