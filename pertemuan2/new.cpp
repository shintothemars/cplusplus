#include <iostream>
#include <memory>
using namespace std;

int main() {

   // Declared a pointer to store
   // the address of the allocated memory
   int *nptr;
  
   // Allocate and initialize memory
   nptr = new int(6);
   // Print the value
   cout << *nptr << endl;
   // Print the address of memory block
   cout << nptr;
   return 0;
}
