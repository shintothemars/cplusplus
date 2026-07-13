#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

// Class Circle mewarisi Shape
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor
    Circle(float r);

    // Method menghitung luas
    float calculateArea() override;
};

#endif