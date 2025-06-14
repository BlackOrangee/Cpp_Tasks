#pragma once
#include "Component.h"

class Screen :
    public Component
{
public:
	// Constructor for the Screen class, which initializes the screen with a given name.
	Screen(string);

	// Implementation of the useComponent() function specific to the Screen class.
	// This function returns a description of how the screen is used, which is "Shows the image" in this case.
	string useComponent() override;
};

