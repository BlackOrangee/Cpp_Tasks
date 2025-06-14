#include "MobilePhone.h"

// Constructor for the MobilePhone class, which initializes its components.
MobilePhone::MobilePhone()
{
    components.push_back(new Camera("Camera"));
    components.push_back(new Screen("Screen"));
    components.push_back(new Mothermoard("Mothermoard"));
}

// Helper function to display the status (On/Off) of a given component.
void MobilePhone::displayStatus(Component* n)
{
    cout << n->getName() << " is ";
    if (n->getStatus())
    {
        cout << "On" << endl;
    }
    else
    {
        cout << "Off" << endl;
    }
}

// Turns on all components of the mobile phone and displays their status.
void MobilePhone::turnOn()
{
    for (Component* n : components)
    {
        n->turnOn();
        displayStatus(n);
    }
}

// Turns off all components of the mobile phone and displays their status.
void MobilePhone::turnOff()
{
    for (Component* n : components)
    {
        n->turnOff();
        displayStatus(n);
    }
}

// Uses the camera component to capture a photo and displays a message.
void MobilePhone::makePhoto()
{
    cout << components[0]->useComponent() << endl;
}

// Uses the screen component to show an image and displays a message.
void MobilePhone::showImage()
{
    cout << components[1]->useComponent() << endl;
}

// Uses the motherboard component to calculate numbers and displays a message.
void MobilePhone::calculateNumbers()
{
    cout << components[2]->useComponent() << endl;
}
