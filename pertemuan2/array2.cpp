#include <iostream>
using namespace std;

int main() {
 // Membuat array bernama ages
 // Array ini menyimpan 8 data umur
 int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

  // Variabel avg digunakan untuk menyimpan hasil rata-rata
  // Variabel sum digunakan untuk menyimpan jumlah semua umur
  // Nilai awal sum adalah 0
 float avg, sum = 0;

 // Variabel i disiapkan untuk perulangan,
  // tetapi pada program ini belum digunakan
 int i;

    // Menghitung jumlah data di dalam array ages
    // sizeof(ages) = ukuran seluruh array
    // sizeof(ages[0]) = ukuran satu data dalam array
    // Hasil pembagian = jumlah isi array, yaitu 8
 int length = sizeof(ages) / sizeof(ages[0]);

  // Perulangan untuk membaca setiap umur di dalam array ages
  // Variabel age akan berisi satu umur secara bergantian
 for (int age : ages) {
   sum += age;  // Menambahkan umur yang sedang dibaca ke variabel sum
 }
  // Calculate the average by dividing the sum by the length
 avg = sum / length; // Rumus: jumlah seluruh umur dibagi jumlah data

 // Print the average
 cout << "The average age is: " << avg << "\n";

 return 0;
}
