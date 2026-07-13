#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
   // Pure virtual function (Abstraction)
   virtual float calculateArea() = 0;
  
   // Virtual destructor is good practice in OOP
   virtual ~Shape() {}
};

#endif
