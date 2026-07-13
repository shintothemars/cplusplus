#include <iostream> // Library untuk memakai cout, yaitu menampilkan output ke layar
#include <vector>  // Library untuk memakai vector, yaitu wadah berisi banyak data
#include <algorithm>  // Library untuk memakai find_if(), yaitu mencari data berdasarkan syarat
using namespace std;

int main() {
    // Membuat vector bernama v yang berisi beberapa angka
   vector<int> v = {5, 1, 8, 3, 9, 2};

    // find_if() digunakan untuk mencari angka pertama yang memenuhi syarat
    // v.begin() = mulai mencari dari angka pertama dalam vector
    // v.end() = mencari sampai akhir vector
    // auto it = menyimpan lokasi angka yang ditemukan
   auto it = find_if(v.begin(), v.end(), [] (const int& a) {
   // Lambda function:
    // a adalah angka yang sedang diperiksa satu per satu dari vector
    // Operator % mencari sisa pembagian
    // Jika a % 3 == 0, berarti angka a habis dibagi 3    
    return a % 3 == 0;
   });

    // Mengecek apakah angka yang habis dibagi 3 ditemukan
    // Jika it tidak sama dengan v.end(), berarti angka ditemukan
   if (it != v.end()) cout << *it;
   else cout << "No such element"; // Jika tidak ada angka yang habis dibagi 3
   return 0;
}
