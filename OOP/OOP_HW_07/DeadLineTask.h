#pragma once
#include "Text.h"

// Defining the DeadLineTask class which inherits from the Text class
class DeadLineTask : public Text
{
private:
    int day;    // Day of the deadline
    int month;  // Month of the deadline

public:
    // Constructor for the DeadLineTask class
    DeadLineTask(string task, int day, int month);

    // Overridden Print function for the DeadLineTask class
    void Print() override;
};


