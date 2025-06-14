#include "Mothermoard.h"

// Constructor for the Motherboard class, which initializes the motherboard with a given name.
Mothermoard::Mothermoard(string name) : Component(name){}

// Implementation of the useComponent() function specific to the Motherboard class.
// This function returns a description of how the motherboard is used, which is "Calculating" in this case.
string Mothermoard::useComponent()
{
	return "Calculating";
}