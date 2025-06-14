#pragma once
#include "Text.h"

// Derived class GreatedTask inheriting from base class Text
class GreatedTask : public Text
{
public:
    // Constructor to initialize
    GreatedTask(string);

    // Override of the Print function for the GreatedTask class
    void Print() override;
};
