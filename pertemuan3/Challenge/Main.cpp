#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    float radius;

    cout << "=== Circle Area Calculator ===" << endl;

    // Meminta user memasukkan jari-jari
    cout << "Enter radius: ";
    cin >> radius;

    // Membuat object Circle
    Circle myCircle(radius);

    // Menampilkan luas lingkaran
    cout << "The area of the circle is: "
         << myCircle.calculateArea() << endl;

    return 0;
}