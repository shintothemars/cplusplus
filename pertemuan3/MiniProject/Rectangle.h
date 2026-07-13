#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
private:
   float length;
   float width;

public:
   // Constructor to initialize data
   Rectangle(float l, float w) : length(l), width(w) {}

   // Implementing the abstract function (Polymorphism)
   float calculateArea() override {
       return length * width;
   }
};
