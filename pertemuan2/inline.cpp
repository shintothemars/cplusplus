#include <iostream>
using namespace std;

void greet() {
   cout << "Welcome to C++ Programming!" << endl;
}
int multiply(int a, int b) {
   return a * b;
}

// Function with default height 'h' argument
double calcArea(double l, double h = 10.0){
   return l * h;
}

int main() {
  
   greet();
   int result = multiply(4, 5);
   cout << "Multiplication result: " << result << endl;
   cout << "Area 1:  " << calcArea(5) << endl;
   cout << "Area 2: " << calcArea(5, 9);
   return 0;
}
