#include "Shape.h"

// Circle adalah turunan dari Shape
class Circle : public Shape {
private:
    // radius disembunyikan agar tidak diubah sembarangan
    float radius;

public:
    // Constructor untuk mengisi radius saat object dibuat
    Circle(float r) {
        radius = r;
    }

    // Override rumus luas lingkaran
    // Luas = π × r × r
    float calculateArea() override {
        return 3.14 * radius * radius;
    }
};