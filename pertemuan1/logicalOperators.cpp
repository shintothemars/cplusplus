#include <iostream>
using namespace std;

int main() {
   int a = 6, b = 4;

   // Logical AND operator
   cout << "a && b is " << (a && b) << endl;
    // Logical OR operator
   cout << "a || b is " << (a || b) << endl;
    // Logical NOT operator
   cout << "!b is " << (!b);

   return 0;
}

//a = 6 → true
//b = 4 → true
//&& adalah AND. Hasilnya true jika keduanya benar.
//|| adalah OR. Hasilnya true jika salah satu benar.
//! adalah NOT. yaitu membalik nilai logika.

