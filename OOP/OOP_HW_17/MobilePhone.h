#pragma once
#include "Component.h"
#include "Camera.h"
#include "Mothermoard.h"
#include "Screen.h"
#include <vector>

// MobilePhone class represents a mobile device with various components.
class MobilePhone
{
private:
    vector<Component*> components; // Stores the components of the mobile phone.

    // Helper function to display the status (On/Off) of a given component.
    void displayStatus(Component*);

public:
    // Constructor to initialize the mobile phone with its components.
    MobilePhone();

    // Turns on all components of the mobile phone and displays their status.
    void turnOn();

    // Turns off all components of the mobile phone and displays their status.
    void turnOff();

    // Uses the camera component to capture a photo and displays a message.
    void makePhoto();

    // Uses the screen component to show an image and displays a message.
    void showImage();

    // Uses the motherboard component to calculate numbers and displays a message.
    void calculateNumbers();
};


