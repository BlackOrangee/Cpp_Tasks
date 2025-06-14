// Create a class called `Component`, which represents a component of a mobile phone, 
// such as a display, camera, or processor. 
// 
// Then, create a class called `MobilePhone` that uses composition to include several `Component` objects.
// The `MobilePhone` class can have methods for turning the phone on and off, 
// as well as utilizing the functionality of the components for various operations.
// 

#include <iostream>
#include "Component.h"
#include "Camera.h"
#include "MobilePhone.h"
#include "Mothermoard.h"
#include "Screen.h"

using namespace std;

int main()
{
	// Create an instance of the MobilePhone class
	MobilePhone* phone = new MobilePhone();

	// Display the initial status of components
	cout << "Initial Status:\n";
	phone->turnOn(); // Turn on all components

	// Demonstrate using the mobile phone components
	cout << "\nUsing Components:\n";

	// Use the camera to take a photo
	phone->makePhoto(); 

	// Use the motherboard to calculate numbers
	phone->calculateNumbers();

	// Use the screen to display an image
	phone->showImage();

	// Turn off the components and display their status
	cout << "\nTurning Off:\n";
	phone->turnOff();
}