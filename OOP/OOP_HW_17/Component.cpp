#include "Component.h"

// Constructor to initialize a component with a given name and set its status to off.
Component::Component(string name)
{
	this->name = name; // Initialize the name of the component.
	status = false;   // Set the initial status of the component to off.
}

// Function to turn on the component by setting its status to on.
void Component::turnOn()
{
	status = true; // Set the status to on.
}

// Function to turn off the component by setting its status to off.
void Component::turnOff()
{
	status = false; // Set the status to off.
}

// Function to get the current status (on/off) of the component.
bool Component::getStatus()
{
	return status; // Return the current status of the component.
}

// Function to get the name of the component.
string Component::getName()
{
	return name; // Return the name of the component.
}
