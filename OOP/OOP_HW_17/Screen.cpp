#include "Screen.h"

// Constructor for the Screen class, which initializes the screen with a given name.
Screen::Screen(string name) : Component(name) {}

// Implementation of the useComponent() function specific to the Screen class.
// This function returns a description of how the screen is used, which is "Shows the image" in this case.
string Screen::useComponent()
{
    return "Shows the image";
}
