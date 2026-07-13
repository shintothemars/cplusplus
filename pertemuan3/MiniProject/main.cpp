#include <iostream>
#include "Rectangle.h" // In larger projects, you'd link the object files

using namespace std;

int main() {
   float l, w;

   cout << "--- Area Calculator ---" << endl;
   cout << "Enter length: ";
   cin >> l;
   cout << "Enter width: ";
   cin >> w;

   // Create the Object
   Rectangle myRect(l, w);

   // Use the object
   cout << "The area of the rectangle is: " << myRect.calculateArea() << endl;

   return 0;
}

