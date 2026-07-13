#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    // Semua bentuk wajib punya cara menghitung luas
    virtual float calculateArea() = 0;

    virtual ~Shape() {}
};

#endif