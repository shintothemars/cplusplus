#include <iostream>
using namespace std;

int main() {
   int colorCode = 2;

   switch (colorCode) {
       case 1:
           cout << "The color is Red";
           break;
       case 2:
           cout << "The color is Blue";
           break;
       case 3:
           cout << "The color is Green";
           break;
       default:
           cout << "Unknown color";
   }

   return 0;
}
