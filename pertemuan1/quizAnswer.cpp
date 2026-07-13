#include <iostream>
using namespace std;

int main() {
    float radius = 3;
    float height = 10;
    float phi = 3.14;
    float surfaceArea;

    surfaceArea = 2 * phi * radius * (radius + height);

    cout << "Total surface area of the tank: "
         << surfaceArea << " m2";

    return 0;
}
//// comm