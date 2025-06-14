#pragma once
#include "Component.h"

class Mothermoard :
    public Component
{
public:
	// Constructor to initialize a Motherboard with a given name.
	Mothermoard(string);

	// Implementation of the useComponent() function specific to the Motherboard class.
	// This function returns a description of how the motherboard is used, which is "Calculating" in this case.
	string useComponent() override;
};
