#pragma once
#include "Text.h"

// Defining the DailyTask class which inherits from the Text class
class DailyTask : public Text
{
private:
    int hour;       // Hour of the daily task
    int minutes;    // Minutes of the daily task

public:
    // Constructor for the DailyTask class
    DailyTask(string task, int hour, int minutes);

    // Overridden Print function for the DailyTask class
    void Print() override;
};


