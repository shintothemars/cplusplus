#include <iostream>
using namespace std;

int main() {
   int *ptr = NULL; // Membuat memori baru dan menyimpan angka 6
   // Request memory for integer variable
   // using new operator
   ptr = new int(10);
   if (!ptr) {
       cout << "allocation of memory failed";
       exit(0);
   }

    // *ptr artinya mengambil isi dari alamat memori yang ditunjuk ptr.
   // Karena ptr menunjuk ke angka 10, maka yang ditampilkan adalah 10.
   cout << "Value of *p: " << *ptr << endl;

   // Free the value once it is used
   delete ptr;

    // Membuat array baru di heap memory yang memiliki 3 tempat integer.
   // Indeks array dimulai dari 0, jadi tersedia ptr[0], ptr[1], dan ptr[2].
   ptr = new int[3];
   ptr[2] = 11; // Tempat ketiga diisi 11
   ptr[1] = 22; // Tempat kedua diisi 22
   ptr[0] = 33; // Tempat pertama diisi 33

   // Menampilkan tulisan sebelum isi array.
   cout << "Array: ";

   // Perulangan untuk menampilkan semua isi array dari indeks 0 sampai 2.
   for (int i = 0; i < 3; i++)
       cout << ptr[i] << " ";

    // Menghapus array dari heap memory.
   // Karena sebelumnya dibuat dengan new int[3], harus memakai delete[].
   delete[] ptr;
   return 0;
}
