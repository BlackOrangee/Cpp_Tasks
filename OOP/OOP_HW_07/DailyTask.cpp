#include "DailyTask.h"

// Constructor for the DailyTask class
DailyTask::DailyTask(string task, int hour, int minutes) : Text(task)
{
    this->hour = hour;          // Assigning the provided hour to the class member
    this->minutes = minutes;    // Assigning the provided minutes to the class member
}

// Overridden Print function for the DailyTask class
void DailyTask::Print()
{
    cout << "Time: " << hour << ":" << minutes << " " << task << endl; // Printing the time, task, and a newline
}
