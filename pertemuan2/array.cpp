#include <iostream>
#include <string> // Untuk memakai tipe data string
using namespace std;

int main() {
 // Membuat array bernama cars
 // Array memiliki 4 tempat data: indeks 0, 1, 2, dan 3
 string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

 // Menampilkan isi array pada indeks ke-0
 // Indeks array C++ dimulai dari 0
 cout << cars[0];

 // Menandakan program selesai dengan baik
 return 0;
}
