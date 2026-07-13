#include <iostream>
using namespace std;

class Car {
 public:
   string brand;
   void drive() {
       cout << brand << " is driving!" << endl;
   }
};

int main() {
   Car myCar;          // This is the Object
   myCar.brand = "Toyota";
   myCar.drive();      // Output: Toyota is driving!
   return 0;
}
