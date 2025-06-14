#include "Camera.h"

// Constructor for the Camera class, which initializes the camera with a given name.
Camera::Camera(string name) : Component(name) {}

// Implementation of the useComponent() function specific to the Camera class.
// This function returns a description of how the camera is used, which is "Captures an image" in this case.
string Camera::useComponent()
{
    return "Captures an image";
}
