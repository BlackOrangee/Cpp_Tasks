#pragma once
#include "Component.h"

class Camera :
    public Component
{
public:
	// Constructor for the Camera class, which initializes the camera with a given name.
	Camera(string);

	// Implementation of the useComponent() function specific to the Camera class.
	// This function returns a description of how the camera is used, which is "Captures an image" in this case.
	string useComponent() override;
};

