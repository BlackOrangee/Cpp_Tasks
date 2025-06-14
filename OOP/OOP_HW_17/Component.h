#pragma once
#include <iostream>
using namespace std;

class Component
{
private:
	string name;	// The name of the component.
	bool status;	// The status of the component.

public:
	// Constructor to initialize a Component with a given name and set its status to off.
	Component(string);

	// Virtual function to turn on the component.
	virtual void turnOn();

	// Virtual function to turn off the component.
	virtual void turnOff();

	// Virtual function to get the current status (on/off) of the component.
	virtual bool getStatus();

	// Virtual function to get the name of the component.
	virtual string getName();

	// Pure virtual function representing the usage of the component.
	// Subclasses must implement this function to define specific behavior.
	virtual string useComponent() = 0;
};

