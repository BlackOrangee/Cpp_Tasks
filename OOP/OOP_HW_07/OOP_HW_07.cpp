// Create a program to keep a simple list of tasks (for today, for tomorrow, etc.).
// The base class (Text)receives, containsand outputs the text of one task.
// Derived classes:
// "Important task" (GreatedTask), when displayed, an indication of importance is added(for example, exclamation marks);
// "Urgent task" (DeadLineTask), a date field is added; 
// "Daily Task" (DailyTask), a time field is added.
// The program should generate a list of tasksand display this list on the screen.
//

#include <iostream>
#include "Text.h"
#include "GreatedTask.h"
#include "DeadLineTask.h"
#include "DailyTask.h"

using namespace std;

int main()
{
    // Create different types of tasks
    Text genericTask("Generic Task");
    GreatedTask greatTask("Great Task!");
    DeadLineTask deadlineTask("Finish Report", 15, 7);
    DailyTask dailyTask("Exercise", 7, 30);

    // Create an array of task pointers and populate it
    Text* tasks[] = { &genericTask, &greatTask, &deadlineTask, &dailyTask };

    // Print each task using polymorphism
    for (int i = 0; i < 4; i++)
    {
        tasks[i]->Print();
    }
}