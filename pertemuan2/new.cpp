#include <iostream>
#include <memory>  // Library memory, tetapi pada kode ini sebenarnya belum digunakan
using namespace std;

int main() {

   // Membuat pointer bernama nptr
   // Pointer adalah variabel yang menyimpan alamat memori
   int *nptr;
  
   // new int(6) membuat tempat baru di heap memory
   // Tempat tersebut langsung diisi angka 6
   // Alamat tempat angka 6 disimpan ke pointer nptr   
   nptr = new int(6);
  
   // *nptr berarti mengambil isi dari alamat yang ditunjuk nptr
   // Jadi yang ditampilkan adalah angka 6
   cout << *nptr << endl;


   // nptr tanpa tanda * berarti menampilkan alamat memorinya
   // Hasil alamat bisa berbeda di setiap komputer atau setiap program dijalankan
   cout << nptr;
   return 0;
}
