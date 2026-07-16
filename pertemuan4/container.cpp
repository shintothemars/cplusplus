#include <iostream>   // Library untuk menggunakan cout dan cin
#include <vector>     // Library untuk menggunakan vector

using namespace std;  // Agar tidak perlu menulis std:: di depan cout, vector, dll.

int main() {

    // Membuat sebuah vector bernama 'numbers'
    // Vector ini bertipe int (hanya bisa menyimpan bilangan bulat)
    // Isi awalnya adalah 1, 2, 3, 4, dan 5
    vector<int> numbers {1, 2, 3, 4, 5};

    // Perulangan Range-Based For
    // Artinya: ambil setiap elemen yang ada di dalam vector 'numbers'
    // lalu simpan sementara ke variabel 'number'
    for (int number : numbers) {

        // Menampilkan nilai dari setiap elemen vector
        // Akan dicetak satu per satu dengan spasi di belakangnya
        cout << number << " ";
    }

    // Mengakhiri program dengan status sukses
    return 0;
}